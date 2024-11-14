// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasicEffects.h"
#include "GameFramework/Character.h"
#include "MainCharacter.generated.h"

UCLASS()
class AMainCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Mesh Component
	UPROPERTY(EditAnywhere, Category = "Mesh")
	class UStaticMeshComponent* MyBoxCharacter;

	UPROPERTY(VisibleAnywhere, Category = "Jutsu")
	USceneComponent* ProjectileSpot;

	//UPROPERTY(EditAnywhere, Category = "Jutsu")
	//TSubclassOf<ABasicEffects> Jutsu;

	UFUNCTION(BlueprintCallable)
	void FireBallJutsu();
	
	/*UPROPERTY(EditAnywhere, Category = "Jutsu")
	TSubclassOf<ABasicEffects> Jutsu;*/

	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
