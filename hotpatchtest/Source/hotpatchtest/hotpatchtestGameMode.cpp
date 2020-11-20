// Copyright Epic Games, Inc. All Rights Reserved.

#include "hotpatchtestGameMode.h"
#include "hotpatchtestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AhotpatchtestGameMode::AhotpatchtestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
