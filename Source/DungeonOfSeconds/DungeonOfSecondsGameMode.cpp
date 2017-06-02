// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "DungeonOfSeconds.h"
#include "DungeonOfSecondsGameMode.h"
#include "PlayerCharacter.h"

ADungeonOfSecondsGameMode::ADungeonOfSecondsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/PlayerCharacter_BP.PlayerCharacter_BP_C"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
