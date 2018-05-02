// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "HungerGrounds.h"
#include "HungerGroundsGameMode.h"
#include "HungerGroundsHUD.h"
#include "HungerGroundsCharacter.h"

AHungerGroundsGameMode::AHungerGroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AHungerGroundsHUD::StaticClass();
}
