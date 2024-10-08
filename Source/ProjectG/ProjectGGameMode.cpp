// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectGGameMode.h"
#include "ProjectGCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectGGameMode::AProjectGGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
