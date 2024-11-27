// Fill out your copyright notice in the Description page of Project Settings.

#include "MainCharacter.h"


// Constructor
AMainCharacter::AMainCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Begin Play
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Event Tick
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Setup Player Input Component
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

