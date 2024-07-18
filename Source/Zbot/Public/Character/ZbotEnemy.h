// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/ZbotCharacterBase.h"
#include "Interaction/TargetInterface.h"
#include "ZbotEnemy.generated.h"

/**
 * 
 */
UCLASS()
class ZBOT_API AZbotEnemy : public AZbotCharacterBase, public ITargetInterface
{
	GENERATED_BODY()
	
public:
	/*
 * INTERFACES
 * 
 */
	//~ TargetInterface
	virtual void HighlightTarget() override;
	virtual void UnHighlightTarget() override;

	//~ CombatInterface

	
public:


	
protected:

	

private:

	
	
};
