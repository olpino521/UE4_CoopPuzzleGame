// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "CoopPuzzleGameState.generated.h"

/**
 * 
 */
UCLASS()
class COOPPUZZLEGAME_API ACoopPuzzleGameState : public AGameStateBase
{
	GENERATED_BODY()

public:

	// This runs in all the clients
	UFUNCTION(NetMulticast, Reliable)
	void MulticastOnRoomCompleted(APawn* InstigatorPawn);
	
};
