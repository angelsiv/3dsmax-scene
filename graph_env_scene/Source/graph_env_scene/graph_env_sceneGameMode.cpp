// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "graph_env_sceneGameMode.h"
#include "graph_env_sceneCharacter.h"
#include "UObject/ConstructorHelpers.h"

Agraph_env_sceneGameMode::Agraph_env_sceneGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
