// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectGGameMode.h"
#include "ProjectGCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectGGameMode::AProjectGGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
