// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ZbotCharacterBase.h"
#include "GameFramework/CharacterMovementComponent.h"


AZbotCharacterBase::AZbotCharacterBase()
{
	PrimaryActorTick.bCanEverTick = true;
	GetCharacterMovement()->SetMovementMode(MOVE_Flying);
	GetCharacterMovement()->RotationRate = FRotator(0.f,0.f,0.f);
	GetCharacterMovement()->bOrientRotationToMovement = true;
	bUseControllerRotationPitch = true;
	bUseControllerRotationRoll = true;
	bUseControllerRotationYaw = true;
}

void AZbotCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}


