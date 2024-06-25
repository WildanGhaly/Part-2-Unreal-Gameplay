// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealGameplayGameMode.h"
#include "UnrealGameplayCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealGameplayGameMode::AUnrealGameplayGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
