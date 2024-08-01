// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"
#include "ZbotPlayerState.generated.h"
class UAbilitySystemComponent;
class UAttributeSet;
/**
 * 
 */
UCLASS()
class ZBOT_API AZbotPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;
	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;
	
public:
	AZbotPlayerState();

private:

	
public: //getters
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override { return AbilitySystemComponent; }
	UAttributeSet* GetAttributeSet() const { return AttributeSet; }
	
};
