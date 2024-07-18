// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ZbotCharacterBase.generated.h"
class UFloatingPawnMovement;

UCLASS(Abstract)
class ZBOT_API AZbotCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AZbotCharacterBase();

protected:
	virtual void BeginPlay() override;

};
