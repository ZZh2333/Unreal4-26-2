// Fill out your copyright notice in the Description page of Project Settings.


#include "PacmanEnemy.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"

// Sets default values
APacmanEnemy::APacmanEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	EnemyDisplayMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EnemyDisplayMesh"));
	EnemyDisplayMesh->SetupAttachment(GetCapsuleComponent());

}

// Called when the game starts or when spawned
void APacmanEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APacmanEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APacmanEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

