// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "GameFramework/PlayerController.h"
#include "ZbotPlayerController.generated.h"
struct FInputActionValue;
class UInputAction;
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
	void AddMappingContexts();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;
	virtual void SetupInputComponent() override;

private:
	/*
 *INPUT
 * 
 */
	void Move(const FInputActionValue& InputActionValue);
	void Look(const FInputActionValue& InputActionValue);
	void MoveUpDown(const FInputActionValue& InputActionValue);
	UPROPERTY(EditAnywhere,Category="Zbot|Input")
	TObjectPtr<UInputMappingContext> ZbotContext;
	UPROPERTY(EditAnywhere,Category="Zbot|Input")
	TObjectPtr<UInputAction> MoveAction;
	UPROPERTY(EditAnywhere,Category="Zbot|Input")
	TObjectPtr<UInputAction> LookAction;
	UPROPERTY(EditAnywhere,Category="Zbot|Input")
	TObjectPtr<UInputAction> MoveUpDownAction;
	
};
