// Copyright Epic Games, Inc. All Rights Reserved.

#include "First_gameGameMode.h"
#include "First_gameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirst_gameGameMode::AFirst_gameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
