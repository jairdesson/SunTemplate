// Fill out your copyright notice in the Description page of Project Settings.

#include "BasicEffects.h"
#include "UObject/ConstructorHelpers.h"
#include "Assets/PopcornFXEffect.h"
#include "PopcornFXFunctions.h"

// Constructor
ABasicEffects::ABasicEffects()
{
	// Tick Enabled or Disabled
	PrimaryActorTick.bCanEverTick = true;
	Fireball = CreateDefaultSubobject<UPopcornFXEffect>(TEXT("Fireball Jutsu"));

	ConstructorHelpers::FObjectFinderOptional<UPopcornFXEffect>FireballJutsu(TEXT("/Script/PopcornFX.PopcornFXEffect'/Game/StarterContent/Effects/10_Blending_Modes.10_Blending_Modes'"));
	if (FireballJutsu.Succeeded())
	{
		Fireball = FireballJutsu.Get();
	}

}

void ABasicEffects::SPawnFireBallJutsu()
{
	if (Fireball != nullptr)
	{
		UPopcornFXFunctions::SpawnEmitterAtLocation(this, Fireball, TEXT("PopcornFX_DefaultScene"), GetActorLocation());
	}
}

//void ABasicEffects::SPawnFireBallJutsu(FVector LocationJutsu)
//{
//	if (Fireball != nullptr)
//	{
//		UPopcornFXFunctions::SpawnEmitterAtLocation(this, Fireball, TEXT("PopcornFX_DefaultScene"), LocationJutsu);
//	}
//}

// Begin Play
void ABasicEffects::BeginPlay()
{
	Super::BeginPlay();
}

// Event Tick
void ABasicEffects::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}