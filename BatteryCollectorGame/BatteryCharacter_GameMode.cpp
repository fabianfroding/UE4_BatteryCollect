// Fill out your copyright notice in the Description page of Project Settings.


#include "BatteryCharacter_GameMode.h"
#include "GameFramework/Actor.h"


ABatteryCharacter_GameMode::ABatteryCharacter_GameMode()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ABatteryCharacter_GameMode::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(
		UnusedHandle, this, &ABatteryCharacter_GameMode::SpawnPlayerRecharge,
		FMath::RandRange(2.0f, 5.0f), true);
}

void ABatteryCharacter_GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABatteryCharacter_GameMode::SpawnPlayerRecharge()
{
	float RandX = FMath::RandRange(Spawn_X_MIN, Spawn_X_MAX);
	float RandY = FMath::RandRange(Spawn_Y_MIN, Spawn_Y_MAX);

	FVector SpawnPosition = FVector(RandX, RandY, Spawn_Z);
	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);

	GetWorld()->SpawnActor(PlayerRecharge, &SpawnPosition, &SpawnRotation);
}
