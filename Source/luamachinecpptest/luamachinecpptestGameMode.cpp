// Copyright Epic Games, Inc. All Rights Reserved.

#include "luamachinecpptestGameMode.h"
#include "luamachinecpptestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AluamachinecpptestGameMode::AluamachinecpptestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
