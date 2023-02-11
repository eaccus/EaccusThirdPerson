// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdPerson427GameMode.h"
#include "ThirdPerson427Character.h"
#include "UObject/ConstructorHelpers.h"

AThirdPerson427GameMode::AThirdPerson427GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
