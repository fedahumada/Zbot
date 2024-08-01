// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ZbotEnemy.h"
#include "AbilitySystem/ZbotAttributeSet.h"
#include "AbilitySystem/ZbotAbilitySystemComponent.h"

void AZbotEnemy::HighlightTarget()
{
}

void AZbotEnemy::UnHighlightTarget()
{
}

void AZbotEnemy::BeginPlay()
{
	Super::BeginPlay();
	AbilitySystemComponent->InitAbilityActorInfo(this,this);
}

AZbotEnemy::AZbotEnemy()
{
	AbilitySystemComponent = CreateDefaultSubobject<UZbotAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);
	AttributeSet = CreateDefaultSubobject<UZbotAttributeSet>("AttributeSet");
}
