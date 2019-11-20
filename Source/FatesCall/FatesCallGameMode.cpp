// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FatesCallGameMode.h"
#include "FatesCallPlayerController.h"
#include "FatesCallCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFatesCallGameMode::AFatesCallGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AFatesCallPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}