// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pocion.h"
#include "PocionDeFortunaDelReinoExterior.generated.h"

/**
 * 
 */
UCLASS()
class FACTMETHO_PATTERN_API APocionDeFortunaDelReinoExterior : public APocion
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	//Preparar la pocion
	void Preparar() override;
	
};
