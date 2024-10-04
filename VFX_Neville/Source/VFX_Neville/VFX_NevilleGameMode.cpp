// Copyright Epic Games, Inc. All Rights Reserved.

#include "VFX_NevilleGameMode.h"
#include "VFX_NevilleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AVFX_NevilleGameMode::AVFX_NevilleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
