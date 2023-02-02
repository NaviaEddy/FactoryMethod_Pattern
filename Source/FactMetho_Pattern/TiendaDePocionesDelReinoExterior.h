// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TiendaDePociones.h"
#include "TiendaDePocionesDelReinoExterior.generated.h"

/**
 * 
 */
UCLASS()
class FACTMETHO_PATTERN_API ATiendaDePocionesDelReinoExterior : public ATiendaDePociones
{
	GENERATED_BODY()

public:
	//Preparar la pocion seleccionada
	virtual APocion* PrepararPocion(FString _Pocion) override;
	
};
