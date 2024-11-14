// Fill out your copyright notice in the Description page of Project Settings.

#include "MainCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Assets/PopcornFXEffect.h"
#include "PopcornFXFunctions.h"
#include "BasicEffects.h"

// Sets default values
AMainCharacter::AMainCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyBoxCharacter = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Caixa do Personagem"));
	MyBoxCharacter->SetupAttachment(RootComponent);


	ProjectileSpot = CreateDefaultSubobject<USceneComponent>(TEXT("Origem da Magia"));

	ConstructorHelpers::FObjectFinder<UStaticMesh>MeshObject(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Props/SM_CornerFrame.SM_CornerFrame'"));

	if (MeshObject.Succeeded())
	{
		MyBoxCharacter->SetStaticMesh(MeshObject.Object);
	}

}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();

	ABasicEffects* Jutsu = GetWorld()->SpawnActor<ABasicEffects>(ABasicEffects::StaticClass());
	Jutsu->SPawnFireBallJutsu();
}

void AMainCharacter::FireBallJutsu()
{
	/*const FActorSpawnParameters SpawnParameters;
	const ABasicEffects* SpawnedFireBallJutsu = GetWorld()->SpawnActor<ABasicEffects>(Jutsu, ProjectileSpot->GetComponentTransform(), SpawnParameters);*/
}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

