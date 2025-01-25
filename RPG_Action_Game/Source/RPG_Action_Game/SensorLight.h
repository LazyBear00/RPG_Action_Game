// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SensorLight.generated.h"

/*
	ASensorLight is a class that represents a sensor-controlled light actor within the game environment.
	This class is responsible for managing the light's intensity and state based on sensor detection.
	It supports multiple states including:
	- CLOSED: Light is off.
	- OPENED: Light is fully on.
	- DETECTED: Light is transitioning to an OPENED state due to sensor detection.
	- UNDETECTED: Light is transitioning to a CLOSED state as no sensor detection occurs.

	Additionally, the class handles overlap events with other game objects, such as Pawns and Vehicles.
	It updates the light's behavior dynamically based on these interactions, ensuring that the light reacts appropriately
	to the presence and absence of actors in its vicinity.
*/


//Enumeration for representing different states of a sensor light.
//This is a strongly-typed enum class, which helps in type safety and better organization.
#pragma region SensorLightEnumerator
UENUM(BlueprintType)
enum class ESensorLightState : uint8
{
	Detected,
	UnDetected,
	Opened,
	Closed
};

#define SENSOR_LIGHT_STATE_DETECTED			ESensorLightState::Detected
#define SENSOR_LIGHT_STATE_UNDETECTED		ESensorLightState::UnDetected
#define SENSOR_LIGHT_STATE_OPENED			ESensorLightState::Opened
#define SENSOR_LIGHT_STATE_CLOSED			ESensorLightState::Closed
#pragma endregion

//Forward declarations of classes to avoid circular dependencies and reduce compile time.
#pragma region Forward-Decleration
class AActor;

class UBoxComponent;
class UPointLightComponent;
class UPrimitiveComponent;
#pragma endregion

UCLASS()
class RPG_ACTION_GAME_API ASensorLight : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASensorLight();

protected:
	// Called every frame
	virtual void Tick(float DeltaTime);

#pragma region SensorLightState
protected:
	// The current state of the sensor light.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sensor")
	ESensorLightState SensorLightState;

public:
	// Returns the current state of the sensor light.
	ESensorLightState GetSensorState() const;

	// Sets the sensor light to a new state.
	UFUNCTION()
	void SetSensorState(ESensorLightState NewState);

	// Checks if the current sensor light state matches the specified state.
	UFUNCTION()
	bool IsSensorState(ESensorLightState CheckState) const;
#pragma endregion
#pragma region PointLight
protected:
	// A pointer to the PointLight component, representing a point light in the scene.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Lighting")
	TObjectPtr<UPointLightComponent> PointLight;

public:
	// Returns the PointLight component.
	UFUNCTION(BlueprintCallable, Category = "Lighting")
	UPointLightComponent* GetPointLight() const;

#pragma endregion
#pragma region Collision
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component")
	TObjectPtr<UBoxComponent> CollisionBox;

public:
	TObjectPtr<UBoxComponent> GetBoxComponent();
#pragma endregion
#pragma region Overlap
private:
	// Triggered when overlapping starts.
	UFUNCTION()
	void OnStateBeginOverlap
	(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);

	// Triggered when overlapping ends.
	UFUNCTION()
	void OnStateEndOverlap
	(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex
	);

#pragma endregion
#pragma region Light System
private:
	// Updates the current light state each frame based on the DeltaTime.
	void UpdateLightState(float DeltaTime);

private:
	// Current intensity amount for the light.
	UPROPERTY()
	float IntensityAmount = 0.2f;

	// Minimum allowable intensity for the light.
	UPROPERTY()
	float MinIntensityAmount = 0.0f;

	// Maximum allowable intensity for the light.
	UPROPERTY()
	float MaxIntensityAmount = 6.0f;

private:
	// Activates the state light, adjusting its behavior over time.
	UFUNCTION()
	void ActivateStateLight(float DeltaTime);

	// Deactivates the state light, adjusting its behavior over time.
	UFUNCTION()
	void DeactivateStateLight(float DeltaTime);

	// Modifies the light's intensity either by increasing or decreasing based on the flag.
	UFUNCTION()
	void ModifyStateLight(float DeltaTime, bool bIncreasing);

	// Increases the light's intensity over time.
	UFUNCTION()
	void IncreaseStateLight(float DeltaTime);

	// Decreases the light's intensity over time.
	UFUNCTION()
	void DecreaseStateLight(float DeltaTime);

#pragma endregion
};
