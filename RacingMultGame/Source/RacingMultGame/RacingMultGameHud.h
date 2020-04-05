// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "RacingMultGameHud.generated.h"


UCLASS(config = Game)
class ARacingMultGameHud : public AHUD
{
	GENERATED_BODY()

public:
	ARacingMultGameHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};
