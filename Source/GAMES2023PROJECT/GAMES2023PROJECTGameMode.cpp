// Copyright Epic Games, Inc. All Rights Reserved.

#include "GAMES2023PROJECTGameMode.h"
#include "GAMES2023PROJECTCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGAMES2023PROJECTGameMode::AGAMES2023PROJECTGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
