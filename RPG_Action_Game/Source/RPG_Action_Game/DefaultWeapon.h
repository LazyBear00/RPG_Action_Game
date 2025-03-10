// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DefaultWeapon.generated.h"

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	E_Default		UMETA(DisplayName = "Default"),
	E_Dagger		UMETA(DisplayName = "Dagger"),
	E_Sword			UMETA(DisplayName = "Sword"),
	E_Axe			UMETA(DisplayName = "Axe")
};

UCLASS()
class RPG_ACTION_GAME_API ADefaultWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADefaultWeapon();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	int LevelRaq;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	float BaseDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	float BaseSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	EWeaponType WeaponType;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
