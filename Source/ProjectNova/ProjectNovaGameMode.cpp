// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectNovaGameMode.h"
#include "ProjectNovaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectNovaGameMode::AProjectNovaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
