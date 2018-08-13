// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ProjectCloudGameMode.h"
#include "ProjectCloudHUD.h"
#include "ProjectCloudCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectCloudGameMode::AProjectCloudGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AProjectCloudHUD::StaticClass();
}
