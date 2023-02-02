// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FactMetho_PatternGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FACTMETHO_PATTERN_API AFactMetho_PatternGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFactMetho_PatternGameModeBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FTimerHandle TimerHandle;

	void PocionesDelReinoExterior();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
