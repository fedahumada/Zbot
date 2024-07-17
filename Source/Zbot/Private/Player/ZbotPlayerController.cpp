// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/ZbotPlayerController.h"
#include "EnhancedInputSubsystems.h"

AZbotPlayerController::AZbotPlayerController()
{
	bReplicates = true;
}

void AZbotPlayerController::BeginPlay()
{
	Super::BeginPlay();
	check(ZbotContext);

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
}

void AZbotPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
}
