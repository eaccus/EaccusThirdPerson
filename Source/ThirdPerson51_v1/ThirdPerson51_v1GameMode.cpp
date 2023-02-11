// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdPerson51_v1GameMode.h"
#include "ThirdPerson51_v1Character.h"
#include "UObject/ConstructorHelpers.h"

AThirdPerson51_v1GameMode::AThirdPerson51_v1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
