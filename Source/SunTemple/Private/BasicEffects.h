// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasicEffects.generated.h"

UCLASS()
class ABasicEffects : public AActor
{
	GENERATED_BODY()
	
public:	
	// Constructor
	ABasicEffects();

	UPROPERTY(EditAnywhere, Category = "Fireball Jutsus")
	class UPopcornFXEffect* Fireball;

	void SPawnFireBallJutsu();
	
	// void SPawnFireBallJutsu(FVector LocationJutsu);

protected:
	// Begin Play
	virtual void BeginPlay() override;
	

public:	
	// Event Tick
	virtual void Tick(float DeltaTime) override;

};
