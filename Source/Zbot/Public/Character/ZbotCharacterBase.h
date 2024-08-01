// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "ZbotCharacterBase.generated.h"
class UAbilitySystemComponent;
class UAttributeSet;
class UFloatingPawnMovement;

UCLASS(Abstract)
class ZBOT_API AZbotCharacterBase : public ACharacter, public IAbilitySystemInterface 
{
	GENERATED_BODY()

protected:
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override { return AbilitySystemComponent; }
	UAttributeSet* GetAttributeSet() const { return AttributeSet; }
	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;
	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;

public:
	AZbotCharacterBase();
	

protected:
	virtual void BeginPlay() override;


};
