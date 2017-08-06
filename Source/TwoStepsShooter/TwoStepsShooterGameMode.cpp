// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TwoStepsShooterGameMode.h"
#include "TwoStepsShooterHUD.h"
#include "TwoStepsShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATwoStepsShooterGameMode::ATwoStepsShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATwoStepsShooterHUD::StaticClass();
}
