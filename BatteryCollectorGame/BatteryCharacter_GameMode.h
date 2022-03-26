// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "BatteryCharacter_GameMode.generated.h"

/**
 * 
 */
UCLASS()
class BATTERYCOLLECTORGAME_API ABatteryCharacter_GameMode : public AGameMode
{
	GENERATED_BODY()

	ABatteryCharacter_GameMode();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		TSubclassOf<APawn> PlayerRecharge;

	float Spawn_Z = 500.0f;

	UPROPERTY(EditAnywhere)
		float Spawn_X_MIN;

	UPROPERTY(EditAnywhere)
		float Spawn_X_MAX;

	UPROPERTY(EditAnywhere)
		float Spawn_Y_MIN;

	UPROPERTY(EditAnywhere)
		float Spawn_Y_MAX;
	
	void SpawnPlayerRecharge();
};
