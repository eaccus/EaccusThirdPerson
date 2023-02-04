// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdPerson2GameMode.h"
#include "ThirdPerson2Character.h"
#include "UObject/ConstructorHelpers.h"

AThirdPerson2GameMode::AThirdPerson2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
