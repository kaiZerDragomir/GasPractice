// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UdemyCourceHUD.generated.h"

UCLASS()
class AUdemyCourceHUD : public AHUD
{
	GENERATED_BODY()

public:
	AUdemyCourceHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

