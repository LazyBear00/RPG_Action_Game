// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultEnemy.h"

// Sets default values
ADefaultEnemy::ADefaultEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Health = 1.0f;
	bHasTakenDamage = false;
	bIsDead = false;
}

// Called when the game starts or when spawned
void ADefaultEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADefaultEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADefaultEnemy::TakeEnemyDamage(float InDamage)
{
	Health -= InDamage;

	if (Health <= 0.0f)
	{
		bIsDead = true;
	}
	else
	{
		bHasTakenDamage = true;
	}
}

