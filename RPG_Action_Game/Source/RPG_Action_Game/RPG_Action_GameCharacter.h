// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "DefaultWeapon.h"
#include "RPG_Action_GameCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
class UStatAssignmentCPP;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game)
class ARPG_Action_GameCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USpringArmComponent> CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UCameraComponent> FollowCamera;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputMappingContext> DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> LookAction;

	//Sprint Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> SprintAction;

	//Health Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> HealthAction;
	//Damage Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> DamageAction;
	//Equip Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> EquipAction;
	//Zoom Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> ZoomAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> AttackAction;
public:
	ARPG_Action_GameCharacter();
	
#pragma region Sprint 
protected:
	//Allows the character to begin sprinting.
	void Sprint();

	//Allows the character to stop sprinting.
	void StopSprinting();
#pragma endregion
#pragma region Zoom
protected:
	// Function to start the camera zoom
	void ZoomIn();

	// Function to stop the camera zoom
	void StopZoom();

	// Boolean function to check if the camera is zoomed in
	bool bIsZoomedIn;

	void IncreaseZoomCamera(float& Type, float Max, float Min, float Instance);

	void DecreaseZoomCamera(float& Type, float Max, float Min, float Instance);
#pragma endregion
#pragma region Health
protected:
	// Declare a function to apply damage to the character, callable from Blueprints and categorized under "Health"
	UFUNCTION(BlueprintCallable, Category = "Health")
	void Damage(float InDamageAmount);

	// Declare a function to start applying damage to the character
	void StartDamage();

	// Declare a function to heal the character, callable from Blueprints and categorized under "Health"
	UFUNCTION(BlueprintCallable, Category = "Health")
	void Heal(float InHealAmount);

	// Declare a function to start healing the character
	void StartHealing();

	// Declare a function to increase the character's armor, callable from Blueprints and categorized under "Health"
	UFUNCTION(BlueprintCallable, Category = "Health")
	void IncreaseArmor(float InHealArmount);

	//The amount of health the character currently has.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float PlayerCurrentHealth;

	// Define the maximum health of the player, editable in the editor and readable/writable in Blueprints
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float PlayerMaxHealth = 1.00f;

	// Boolean flag indicating whether the player has armor
	bool hasArmor;

	//The amount of armor the character currently has.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float PlayerCurrentArmor;

	// Define the maximum armor of the player, editable in the editor and readable/writable in Blueprints
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float PlayerMaxArmor = 1.00f;

	// Checks if the player's health is at or below zero, indicating the player is dead.
	bool IsPlayerDead();

	// Checks if the player's current armor has reached its maximum capacity.
	bool IsArmorFull();
#pragma endregion
#pragma region Expreinece
protected:
	UFUNCTION(BlueprintCallable, Category = "Stats")
	void GainExperience(float ExpAmount);
#pragma endregion
#pragma region Equip
protected:
	//Allows the character to equip an item they are close to.
	void EquipItem();

	//Determines if the character is overlapping an equippable item.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Items")
	bool isOverlappingItem;
#pragma endregion
#pragma region Weapon
protected:
	// Represents the current level of the weapon.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	int CurrentLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float ExperiencePoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float ExperienceToLevel;

	// Represents the dexterity value of the weapon.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	int DexterityValue;

	// Represents the intellect value of the weapon.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	int IntellectValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float AttackSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	ADefaultWeapon* CurrentWeapon;

public:
	// Represents the upgrade points available for the weapon.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	int UpgradePoints;

	// Represents the strength value of the weapon.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	int StrengthValue;
#pragma endregion
#pragma region Attack
protected:
	void Punch();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	bool HasPunched;
#pragma endregion

#pragma region Move
public:
	/** Called for movement input */
	void Move(const FInputActionValue& Value);
#pragma endregion
#pragma region Look
public:
	/** Called for looking input */
	void Look(const FInputActionValue& Value);
#pragma endregion
protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// To add mapping context
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};

