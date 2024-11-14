// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PopcornFXEmitter.h"
#include "FireEffects.generated.h"

/**
 * 
 */
UCLASS()
class AFireEffects : public APopcornFXEmitter
{
	GENERATED_BODY()

public:
	// Constructor
	AFireEffects();

	UFUNCTION(BlueprintCallable)
	void SpawnFireBall();

protected:

	UPROPERTY(EditAnywhere, Category = "Fire Jutsus")
	class UPopcornFXEffect* FireBall;

private:
	
};
