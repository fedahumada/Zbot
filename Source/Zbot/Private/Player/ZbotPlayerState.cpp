// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/ZbotPlayerState.h"
#include "AbilitySystem/ZbotAbilitySystemComponent.h"
#include "AbilitySystem/ZbotAttributeSet.h"

AZbotPlayerState::AZbotPlayerState()
{
	NetUpdateFrequency = 100.f;
	AbilitySystemComponent = CreateDefaultSubobject<UZbotAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
	AttributeSet = CreateDefaultSubobject<UZbotAttributeSet>("AttributeSet");
}
