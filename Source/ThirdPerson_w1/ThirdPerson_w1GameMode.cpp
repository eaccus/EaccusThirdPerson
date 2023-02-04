// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdPerson_w1GameMode.h"
#include "ThirdPerson_w1Character.h"
#include "UObject/ConstructorHelpers.h"

AThirdPerson_w1GameMode::AThirdPerson_w1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
