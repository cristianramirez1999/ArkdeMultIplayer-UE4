// Copyright Epic Games, Inc. All Rights Reserved.

#include "CursoGameMode.h"
#include "CursoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACursoGameMode::ACursoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
