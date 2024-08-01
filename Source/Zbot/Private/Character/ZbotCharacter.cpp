// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ZbotCharacter.h"
#include "AbilitySystemComponent.h"
#include "Player/ZbotPlayerState.h"

void AZbotCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	InitAbilityActorInfo();
	
}

void AZbotCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	InitAbilityActorInfo();
}

AZbotCharacter::AZbotCharacter()
{
}


void AZbotCharacter::InitAbilityActorInfo()
{
	AZbotPlayerState* ZbotPlayerState = GetPlayerState<AZbotPlayerState>();
	check(ZbotPlayerState)
	AbilitySystemComponent = ZbotPlayerState->GetAbilitySystemComponent();
	AbilitySystemComponent->InitAbilityActorInfo(ZbotPlayerState, this);
	AttributeSet = ZbotPlayerState->GetAttributeSet();
}
