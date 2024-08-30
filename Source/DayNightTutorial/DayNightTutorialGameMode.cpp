// Copyright Epic Games, Inc. All Rights Reserved.

#include "DayNightTutorialGameMode.h"
#include "DayNightTutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADayNightTutorialGameMode::ADayNightTutorialGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
