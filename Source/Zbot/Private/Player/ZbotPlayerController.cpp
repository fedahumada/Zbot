// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/ZbotPlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

AZbotPlayerController::AZbotPlayerController()
{
	bReplicates = true;
}

void AZbotPlayerController::BeginPlay()
{
	Super::BeginPlay();
	AddMappingContexts();
}

void AZbotPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	
}

 /*
  *INPUT
  * 
  */
void AZbotPlayerController::AddMappingContexts()
{
	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	check(Subsystem);
	check(ZbotContext);
	Subsystem->AddMappingContext(ZbotContext, 0);
}
void AZbotPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent);
	EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AZbotPlayerController::Move);
	EnhancedInputComponent->BindAction(MoveUpDownAction, ETriggerEvent::Triggered, this, &AZbotPlayerController::MoveUpDown);
	EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AZbotPlayerController::Look);
}
void AZbotPlayerController::Move(const FInputActionValue& InputActionValue)
{
	const FVector2d InputAxisVector = InputActionValue.Get<FVector2d>();
	const FRotator Rotation = GetControlRotation();
	const FVector ForwardDirection = FRotationMatrix(Rotation).GetUnitAxis(EAxis::X);
	const FVector RightDirection = FRotationMatrix(Rotation).GetUnitAxis(EAxis::Y);

	if (APawn* ControlledPawn = GetPawn<APawn>())
	{
		ControlledPawn->AddMovementInput(ForwardDirection, InputAxisVector.Y);
		ControlledPawn->AddMovementInput(RightDirection, InputAxisVector.X);
	}
}
void AZbotPlayerController::MoveUpDown(const FInputActionValue& InputActionValue)
{
	const FVector InputAxisVector = InputActionValue.Get<FVector>();
	const FRotator Rotation = GetControlRotation();
	const FVector UpDirection = FRotationMatrix(Rotation).GetUnitAxis(EAxis::Z);
	if (APawn* ControlledPawn = GetPawn<APawn>())
	{
		ControlledPawn->AddMovementInput(UpDirection, InputAxisVector.X);
	}
}
void AZbotPlayerController::Look(const FInputActionValue& InputActionValue)
{
	const FVector2D LookVector = InputActionValue.Get<FVector2D>();
	if (APawn* ControlledPawn = GetPawn<APawn>())
	{
		ControlledPawn->AddControllerYawInput(LookVector.X);
		ControlledPawn->AddControllerPitchInput(LookVector.Y);
	}
}

