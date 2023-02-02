// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pocion.h"
#include "TiendaDePociones.generated.h"

UCLASS()
class FACTMETHO_PATTERN_API ATiendaDePociones : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATiendaDePociones();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Crea la Poción y la devuelve. Es puramente virtual, por lo que no necesita una implementación en esta clase
	virtual APocion* PrepararPocion(FString _Pocion) PURE_VIRTUAL(ATiendaDePociones::PrepararPocion, return nullptr;);

	//Pide, prepara y devuelve una Poción de una Categoría específica
	APocion* EncargarPocion(FString _Categoria);

};
