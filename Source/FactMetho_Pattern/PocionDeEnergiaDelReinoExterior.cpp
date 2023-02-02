// Fill out your copyright notice in the Description page of Project Settings.


#include "PocionDeEnergiaDelReinoExterior.h"

void APocionDeEnergiaDelReinoExterior::BeginPlay()
{
	Super::BeginPlay();

	//Establecer los ingredientes
	NombreDeLaPocion = "Pocion de energia del reino exterior";
	Viscosidad = "No mucosa";
	Sangre = "Sangre de orco";

	//Agregar las hierbas
	Hierbas.Add("Raiz del reino exterior");
	Hierbas.Add("Diente de conejo del Reino Exterior");
	Hierbas.Add("Camellia sisensis del Reino Exterior");
	Hierbas.Add("Ginseng del Reino Exterior");
}

void APocionDeEnergiaDelReinoExterior::Preparar()
{
	//Registrar el tipo de preparacion
	GEngine->AddOnScreenDebugMessage(-1, 7.f, FColor::Yellow, TEXT("Elaboración de pocion a baja temperatura"));
}
