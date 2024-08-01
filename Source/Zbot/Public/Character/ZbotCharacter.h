// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/ZbotCharacterBase.h"
#include "ZbotCharacter.generated.h"
class AZbotPlayerState;

/**
 * 
 */
UCLASS()
class ZBOT_API AZbotCharacter : public AZbotCharacterBase
{
	GENERATED_BODY()

protected:
	//Server
	virtual void PossessedBy(AController* NewController) override;
	//Client
	virtual void OnRep_PlayerState() override;

public:
	AZbotCharacter();

private:
	void InitAbilityActorInfo();
};
