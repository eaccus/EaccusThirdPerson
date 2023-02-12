// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdPerson51_v2GameMode.h"
#include "ThirdPerson51_v2Character.h"
#include "UObject/ConstructorHelpers.h"

AThirdPerson51_v2GameMode::AThirdPerson51_v2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
