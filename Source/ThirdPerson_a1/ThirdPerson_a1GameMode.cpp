// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdPerson_a1GameMode.h"
#include "ThirdPerson_a1Character.h"
#include "UObject/ConstructorHelpers.h"

AThirdPerson_a1GameMode::AThirdPerson_a1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
