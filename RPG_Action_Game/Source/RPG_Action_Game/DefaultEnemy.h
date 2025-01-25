// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DefaultEnemy.generated.h"

UCLASS()
class RPG_ACTION_GAME_API ADefaultEnemy : public ACharacter
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADefaultEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UFUNCTION(BlueprintCallable)
	void TakeEnemyDamage(float InDamage);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy")
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy")
	bool bHasTakenDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy")
	bool bIsDead;
};
