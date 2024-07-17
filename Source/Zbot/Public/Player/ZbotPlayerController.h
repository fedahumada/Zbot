// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ZbotPlayerController.generated.h"
class UInputMappingContext;

/**
 * 
 */
UCLASS()
class ZBOT_API AZbotPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AZbotPlayerController();

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

private:
	TObjectPtr<UInputMappingContext> ZbotContext;
};
