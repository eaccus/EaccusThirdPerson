// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdPerson427a_v1GameMode.h"
#include "ThirdPerson427a_v1Character.h"
#include "UObject/ConstructorHelpers.h"

AThirdPerson427a_v1GameMode::AThirdPerson427a_v1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
