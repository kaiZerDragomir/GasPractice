// Copyright Epic Games, Inc. All Rights Reserved.

#include "UdemyCourceGameMode.h"
#include "UdemyCourceHUD.h"
#include "UdemyCourceCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUdemyCourceGameMode::AUdemyCourceGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUdemyCourceHUD::StaticClass();
}
