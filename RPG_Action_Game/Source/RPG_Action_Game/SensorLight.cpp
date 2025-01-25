// Fill out your copyright notice in the Description page of Project Settings.


#include "SensorLight.h"
#include "Components/BoxComponent.h"
#include "Components/PointLightComponent.h"

#pragma region Pre-Name Decleration
FName NAME_SensorLightComponent(TEXT("Point Light Component"));
FName NAME_SensorLightCollisionComponent(TEXT("Collision Component"));
#pragma endregion

#pragma region Constructor(ASensorLight)
// Sets default values for this actor's properties
ASensorLight::ASensorLight()
{
	// Enable ticking every frame for this actor. Disable if not needed to improve performance.
	PrimaryActorTick.bCanEverTick = true;

	// Initialize the sensor state to closed
	SetSensorState(SENSOR_LIGHT_STATE_CLOSED);

	// Create a PointLight component and set it as the root component of the actor
	PointLight = CreateDefaultSubobject<UPointLightComponent>(NAME_SensorLightComponent);
	SetRootComponent(PointLight);

	// Set the intensity units for the PointLight to EV (Effective Voltage)
	PointLight->SetIntensityUnits(ELightUnits::EV);

	// Set the initial intensity of the PointLight to 0.0 (off)
	PointLight->SetIntensity(0.0f);

	// Create a BoxComponent for collision detection
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(NAME_SensorLightCollisionComponent);

	// Attach the BoxComponent to the PointLight
	CollisionBox->SetupAttachment(PointLight);

	// Set collision responses for all channels to ignore
	CollisionBox->SetCollisionResponseToAllChannels(ECR_Ignore);

	// Set specific collision responses for Pawn and Vehicle channels to overlap
	CollisionBox->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	CollisionBox->SetCollisionResponseToChannel(ECC_Vehicle, ECR_Overlap);

	// Bind functions to handle when an overlap begins or ends with the CollisionBox
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ASensorLight::OnStateBeginOverlap);
	CollisionBox->OnComponentEndOverlap.AddDynamic(this, &ASensorLight::OnStateEndOverlap);

	// Set the size of the BoxComponent
	CollisionBox->SetBoxExtent(FVector(700.0f, 1000.0f, 300.0f));
}
#pragma endregion
#pragma region LifeCycle Management
// Called every frame
void ASensorLight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdateLightState(DeltaTime);
}
#pragma endregion
#pragma region Sensor Light Statment
// Returns the current state of the sensor light
ESensorLightState ASensorLight::GetSensorState() const
{
	return SensorLightState;
}

// Sets the state of the sensor light to a new value
void ASensorLight::SetSensorState(ESensorLightState NewState)
{
	SensorLightState = NewState;
}

// Checks if the current sensor light state matches the specified state
bool ASensorLight::IsSensorState(ESensorLightState CheckState) const
{
	return SensorLightState == CheckState;
}

// Returns the PointLight component associated with this actor
UPointLightComponent* ASensorLight::GetPointLight() const
{
	return PointLight.Get();
}

#pragma endregion
#pragma region Collision
// Returns the BoxComponent associated with this actor
TObjectPtr<UBoxComponent> ASensorLight::GetBoxComponent()
{
	return CollisionBox.Get();
}

#pragma endregion
#pragma region Overlap
// Called when another component begins to overlap with this component
void ASensorLight::OnStateBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Check if the overlapping actor is a Pawn
	if (OtherActor->IsA<APawn>())
	{
		// Set the sensor state to DETECTED when a Pawn is detected
		SetSensorState(SENSOR_LIGHT_STATE_DETECTED);

		// Debugging flag to control logging
		bool bDebug = true;
		if (bDebug)
		{
			// Log a warning message indicating that a Pawn was detected and the light state was updated
			UE_LOG(LogTemp, Warning, TEXT("OnSensorBeginOverlap: Pawn detected. Light state set to DETECTED."));
		}
	}
}

// Called when another component stops overlapping with this component
void ASensorLight::OnStateEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	// Check if the overlapping actor is a Pawn
	if (OtherActor->IsA<APawn>())
	{
		// Set the sensor state to UNDETECTED when a Pawn is no longer detected
		SetSensorState(SENSOR_LIGHT_STATE_UNDETECTED);

		// Debugging flag to control logging
		bool bDebug = true;
		if (bDebug)
		{
			// Log a warning message indicating that a Pawn is no longer detected and the light state was updated
			UE_LOG(LogTemp, Warning, TEXT("OnSensorEndOverlap: Pawn no longer detected. Light state set to UNDETECTED."));
		}
	}
}
#pragma endregion
#pragma region Light System
// Updates the state of the light based on the current sensor state
void ASensorLight::UpdateLightState(float DeltaTime)
{
	// If the sensor is in the OPENED or CLOSED state, exit the function early
	if (IsSensorState(SENSOR_LIGHT_STATE_OPENED) || IsSensorState(SENSOR_LIGHT_STATE_CLOSED))
	{
		return;
	}

	// If the sensor is in the DETECTED state, activate the light state
	if (IsSensorState(SENSOR_LIGHT_STATE_DETECTED))
	{
		ActivateStateLight(DeltaTime);
	}
	// If the sensor is in the UNDETECTED state, deactivate the light state
	else if (IsSensorState(SENSOR_LIGHT_STATE_UNDETECTED))
	{
		DeactivateStateLight(DeltaTime);
	}
}

// Activates the light state by increasing its intensity
void ASensorLight::ActivateStateLight(float DeltaTime)
{
	ModifyStateLight(DeltaTime, true);
}

// Deactivates the light state by decreasing its intensity
void ASensorLight::DeactivateStateLight(float DeltaTime)
{
	ModifyStateLight(DeltaTime, false);
}

// Modifies the state of the light based on the given DeltaTime and whether to increase or decrease the intensity
void ASensorLight::ModifyStateLight(float DeltaTime, bool bIncreasing)
{
	// Increase or decrease the light intensity based on the bIncreasing flag
	if (bIncreasing)
	{
		IncreaseStateLight(DeltaTime);
	}
	else
	{
		DecreaseStateLight(DeltaTime);
	}

	// Update the sensor state based on the current light intensity
	if (PointLight->Intensity >= MaxIntensityAmount)
	{
		SetSensorState(SENSOR_LIGHT_STATE_OPENED);
	}
	else if (PointLight->Intensity <= MinIntensityAmount)
	{
		SetSensorState(SENSOR_LIGHT_STATE_CLOSED);
	}
}

// Increases the light intensity over time
void ASensorLight::IncreaseStateLight(float DeltaTime)
{
	// Increment the intensity amount based on DeltaTime
	IntensityAmount += (DeltaTime * 2.0f);

	// Clamp the intensity amount between the minimum and maximum values
	IntensityAmount = FMath::Clamp(IntensityAmount, MinIntensityAmount, MaxIntensityAmount);

	// Update the PointLight's intensity
	PointLight->SetIntensity(IntensityAmount);
}

// Decreases the light intensity over time
void ASensorLight::DecreaseStateLight(float DeltaTime)
{
	// Decrement the intensity amount based on DeltaTime
	IntensityAmount -= (DeltaTime * 2.0f);

	// Clamp the intensity amount between the minimum and maximum values
	IntensityAmount = FMath::Clamp(IntensityAmount, MinIntensityAmount, MaxIntensityAmount);

	// Update the PointLight's intensity
	PointLight->SetIntensity(IntensityAmount);
}
#pragma endregion

