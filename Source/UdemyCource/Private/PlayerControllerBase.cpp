// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerControllerBase.h"

void APlayerControllerBase::SetupInputComponent()
{
    Super::SetupInputComponent();

    InputComponent->BindAxis("LookUp", this, &APlayerController::AddPitchInput);
    InputComponent->BindAxis("LookRight", this, &APlayerController::AddYawInput);
}