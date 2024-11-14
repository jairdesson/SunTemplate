// Fill out your copyright notice in the Description page of Project Settings.

#include "FireEffects.h"
#include "UObject/ConstructorHelpers.h"
#include "Assets/PopcornFXEffect.h"
#include "PopcornFXFunctions.h"

AFireEffects::AFireEffects()
{
	FireBall = CreateDefaultSubobject<UPopcornFXEffect>(TEXT("Fire Ball"));

	ConstructorHelpers::FObjectFinderOptional<UPopcornFXEffect>FireBallObject(TEXT("/Script/PopcornFX.PopcornFXEffect'/Game/StarterContent/Effects/06_Events.06_Events'"));

	if (FireBallObject.Succeeded())
	{
		FireBall = FireBallObject.Get();
	}

	SpawnFireBall();

}

void AFireEffects::SpawnFireBall()
{
	if (FireBall != nullptr)
	{
		UPopcornFXFunctions::SpawnEmitterAtLocation(this, FireBall, TEXT("PopcornFX_DefaultScene"), GetActorLocation());
	}

}

