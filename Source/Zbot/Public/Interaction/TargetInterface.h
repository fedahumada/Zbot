// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TargetInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UTargetInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ZBOT_API ITargetInterface
{
	GENERATED_BODY()

public:
	virtual void HighlightTarget() = 0;
	virtual void UnHighlightTarget() = 0;
};
