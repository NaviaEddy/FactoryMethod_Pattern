// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pocion.generated.h"

UCLASS()
class FACTMETHO_PATTERN_API APocion : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APocion();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:
	//El nombre de la pocion
	FString NombreDeLaPocion;

	//La viscosidad de esta poción
	FString Viscosidad;

	//La sangre de esta poción
	FString Sangre;

	//Las hierbas que contiene la pocion
	TArray<FString> Hierbas;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	//Hierve esta poción
	void Ebullicion();

	//Burbujea esta poción
	void Burbujear();

	//Prepara esta poción
	virtual void Preparar();

	//Bottle this potion
	void Embotellar();

	//Devuelve el nombre de la pocion
	FORCEINLINE FString ObtenerNombreDeLaPocion();

};
