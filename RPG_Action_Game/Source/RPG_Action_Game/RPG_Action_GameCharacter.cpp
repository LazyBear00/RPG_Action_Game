// Copyright Epic Games, Inc. All Rights Reserved.

#include "RPG_Action_GameCharacter.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "StatAssignmentCPP.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

#pragma region ARPG_Action_GameCharacter
//////////////////////////////////////////////////////////////////////////
// ARPG_Action_GameCharacter
ARPG_Action_GameCharacter::ARPG_Action_GameCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)

	isOverlappingItem = false;	// Variable indicating whether the player is overlapping with an item, initially set to false.
	hasArmor = true;			// Variable indicating whether the player currently has armor, initially set to true.
	bIsZoomedIn = false;		// Variable to check if the player is zoomed in, initially set to false.
	HasPunched = false;

	ExperiencePoints = 0.0f;
	ExperienceToLevel = 2000.0f;

	CurrentLevel = 1;
	UpgradePoints = 5;

	StrengthValue = 1;
	DexterityValue = 1;
	IntellectValue = 1;

	AttackSpeed = 1.0f;

}
#pragma endregion
#pragma region BeginPlay
void ARPG_Action_GameCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
	PlayerCurrentHealth = PlayerMaxHealth; // Set the player's current health to the maximum health value.
	PlayerCurrentArmor = PlayerMaxArmor;   // Set the player's current armor to the maximum armor value.
}
#pragma endregion
#pragma region Tick
void ARPG_Action_GameCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// Check if the player's current health is less than the maximum health.
	if (PlayerCurrentHealth < PlayerMaxHealth)
	{
		// Check if the player still has armor remaining.
		if (PlayerCurrentArmor > 0)
		{
			// Gradually increase the player's current health.
			PlayerCurrentHealth += 0.0001f;

			// Gradually decrease the player's armor.
			PlayerCurrentArmor -= 0.0001f;
		}
	}

	if (bIsZoomedIn)
	{
		// Get the camera boom component
		if (auto ThirdPersonCamera = GetCameraBoom())
		{
			IncreaseZoomCamera(ThirdPersonCamera->TargetArmLength, 150.0f, 400.0f, 50.0f);

			float TargetOffsetY = ThirdPersonCamera->TargetOffset.Y;
			IncreaseZoomCamera(TargetOffsetY, 20.0f, 0.0f, -5.0f);
			ThirdPersonCamera->TargetOffset.Y = TargetOffsetY;

			float TargetOffsetZ = ThirdPersonCamera->TargetOffset.Z;
			IncreaseZoomCamera(TargetOffsetZ, 70.0f, 0.0f, -20.0f);
			ThirdPersonCamera->TargetOffset.Z = TargetOffsetZ;
		}
	}
	else
	{
		// Get the camera boom component
		if (auto ThirdPersonCamera = GetCameraBoom())
		{
			DecreaseZoomCamera(ThirdPersonCamera->TargetArmLength, 150.0f, 400.0f, 50.0f);

			float TargetOffsetY = ThirdPersonCamera->TargetOffset.Y;
			DecreaseZoomCamera(TargetOffsetY, 0.0f, 20.0f, -5.0f);
			ThirdPersonCamera->TargetOffset.Y = TargetOffsetY;

			float TargetOffsetZ = ThirdPersonCamera->TargetOffset.Z;
			DecreaseZoomCamera(TargetOffsetZ, 0.0f, 70.0f, -20.0f);
			ThirdPersonCamera->TargetOffset.Z = TargetOffsetZ;
		}
	}
}
#pragma endregion

#pragma region InputComponent
//////////////////////////////////////////////////////////////////////////
// Input
void ARPG_Action_GameCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		//Sprinting
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Started, this, &ARPG_Action_GameCharacter::Sprint);
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Completed, this, &ARPG_Action_GameCharacter::StopSprinting);

		//Health
		EnhancedInputComponent->BindAction(HealthAction, ETriggerEvent::Started, this, &ARPG_Action_GameCharacter::StartHealing);
		EnhancedInputComponent->BindAction(DamageAction, ETriggerEvent::Started, this, &ARPG_Action_GameCharacter::StartDamage);

		EnhancedInputComponent->BindAction(EquipAction, ETriggerEvent::Started, this, &ARPG_Action_GameCharacter::EquipItem);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ARPG_Action_GameCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ARPG_Action_GameCharacter::Look);

		//Zooming
		EnhancedInputComponent->BindAction(ZoomAction, ETriggerEvent::Started, this, &ARPG_Action_GameCharacter::ZoomIn);
		EnhancedInputComponent->BindAction(ZoomAction, ETriggerEvent::Completed, this, &ARPG_Action_GameCharacter::StopZoom);

		EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Started, this, &ARPG_Action_GameCharacter::Punch);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}
#pragma endregion

#pragma region Move
void ARPG_Action_GameCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}
#pragma endregion
#pragma region Look
void ARPG_Action_GameCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}
#pragma endregion

#pragma region Sprint
void ARPG_Action_GameCharacter::Sprint()
{

	if (bIsZoomedIn)
	{
		return;
	}
	// Log that the character is sprinting
	UE_LOG(LogTemp, Display, TEXT("It's sprinting"));

	// Set the maximum walk speed to 1000.0f for sprinting
	GetCharacterMovement()->MaxWalkSpeed = 1000.0f;
}

void ARPG_Action_GameCharacter::StopSprinting()
{
	if (bIsZoomedIn)
	{
		return;
	}
	// Log that the sprinting has stopped
	UE_LOG(LogTemp, Display, TEXT("We stopped sprinting"));

	// Reset the maximum walk speed to 600.0f when stopping sprint
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
}
#pragma endregion
#pragma region Zoom
void ARPG_Action_GameCharacter::ZoomIn()
{
	// Set the zoomed-in state to true
	bIsZoomedIn = true;

	GetCharacterMovement()->MaxWalkSpeed = 300.0f;
}

void ARPG_Action_GameCharacter::StopZoom()
{
	// Set the zoomed-in state to false
	bIsZoomedIn = false;

	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
}

void ARPG_Action_GameCharacter::IncreaseZoomCamera(float& Type, float Max, float Min, float Istance)
{
	Type = FMath::Clamp(Type - Istance, Max, Min);
}

void ARPG_Action_GameCharacter::DecreaseZoomCamera(float& Type, float Max, float Min, float Instance)
{
	Type = FMath::Clamp(Type + Instance, Max, Min);
}
#pragma endregion
#pragma region Health
void ARPG_Action_GameCharacter::Damage(float InDamageAmount)
{
	/*
	// Check if the player is dead
	if (bPlayerIsDead == true)
	{
		return;  // Exit the function if the player is dead
	}
	*/

	// Check if the player has armor
	if (hasArmor)
	{
		// Reduce armor by the damage amount
		PlayerCurrentArmor -= InDamageAmount;

		// If armor drops below 0.00f, handle the overflow
		if (PlayerCurrentArmor < 0.00f)
		{
			// No more armor left
			hasArmor = false;

			// Add the remaining damage to health
			PlayerCurrentHealth += PlayerCurrentArmor;

			// Reset armor to 0.00f
			PlayerCurrentArmor = 0.00f;
		}
	}
	else
	{
		// If the player has no armor, check health
		if (PlayerCurrentHealth <= 0.00f)
		{
			// Handle player death (commented out for now)
			// Death();
			return;  // Exit the function if health is not above 0.00f
		}

		// Log the damage taken
		UE_LOG(LogTemp, Display, TEXT("we are taking damage for %f points"), InDamageAmount);

		// Reduce health by the damage amount
		PlayerCurrentHealth -= InDamageAmount;
	}
}

void ARPG_Action_GameCharacter::StartDamage()
{
	// Apply damage with an intensity of 0.02f
	Damage(0.02f);
}

void ARPG_Action_GameCharacter::Heal(float InHealAmount)
{
	// Check if current health is already at or above maximum health
	if (PlayerCurrentHealth >= PlayerMaxHealth)
	{
		return;  // Exit the function if health is full
	}

	// Log the healing amount
	UE_LOG(LogTemp, Display, TEXT("we are healing for %f points"), InHealAmount);

	// Increase current health by the healing amount
	PlayerCurrentHealth += InHealAmount;
}

void ARPG_Action_GameCharacter::StartHealing()
{
	// Initiate healing with an amount of 0.02f
	Heal(0.02f);
}

void ARPG_Action_GameCharacter::IncreaseArmor(float Amount)
{
	// Check if the armor is already full or the player is dead
	if (IsArmorFull() || IsPlayerDead())
	{
		return;  // Exit the function if armor is full or player is dead
	}

	// Increase current armor by the specified amount, clamped between 0 and maximum armor
	PlayerCurrentArmor = FMath::Clamp(PlayerCurrentArmor + Amount, 0, PlayerMaxArmor);
	hasArmor = true;
}

// Check if the player's current health is less than or equal to 0
bool ARPG_Action_GameCharacter::IsPlayerDead()
{
	return PlayerCurrentHealth <= 0;  // Return true if player is dead
}

// Check if the player's current armor is greater than or equal to the maximum armor
bool ARPG_Action_GameCharacter::IsArmorFull()
{
	return PlayerCurrentArmor >= PlayerMaxArmor;  // Return true if armor is full
}

#pragma endregion
#pragma region Experience
void ARPG_Action_GameCharacter::GainExperience(float ExpAmount)
{
	UE_LOG(LogTemp, Warning, TEXT("We are gaining experience for %f points."), ExpAmount);
	ExperiencePoints += ExpAmount;
	if (ExperiencePoints >= ExperienceToLevel)
	{
		++CurrentLevel;
		ExperiencePoints -= ExperienceToLevel;
		ExperienceToLevel += 500.0f;
	}
}
#pragma endregion
#pragma region Equip
void ARPG_Action_GameCharacter::EquipItem()
{
	// Check if the player is overlapping with an item
	if (isOverlappingItem)
	{
		// Log the event of picking up an item
		UE_LOG(LogTemp, Warning, TEXT("We packed up an Item"));
	}
}
#pragma endregion
#pragma region Attack
void ARPG_Action_GameCharacter::Punch()
{
	HasPunched = true;
}
#pragma endregion
