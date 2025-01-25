// Copyright Epic Games, Inc. All Rights Reserved.

#include "RPG_Action_GameGameMode.h"
#include "RPG_Action_GameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARPG_Action_GameGameMode::ARPG_Action_GameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
