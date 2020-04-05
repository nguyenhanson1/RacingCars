// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "RacingMultGameGameMode.h"
#include "RacingMultGamePawn.h"
#include "RacingMultGameHud.h"

ARacingMultGameGameMode::ARacingMultGameGameMode()
{
	DefaultPawnClass = ARacingMultGamePawn::StaticClass();
	HUDClass = ARacingMultGameHud::StaticClass();
}
