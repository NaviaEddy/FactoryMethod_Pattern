// Fill out your copyright notice in the Description page of Project Settings.


#include "PocionDeFortunaDelReinoExterior.h"

void APocionDeFortunaDelReinoExterior::BeginPlay()
{
	Super::BeginPlay();

	//Establecer los ingredientes
	NombreDeLaPocion = "Pocion de fortuna del reino exterior";
	Viscosidad = "No mucosa";
	Sangre = "Sangre de orco";

	//Agregar las hierbas
	Hierbas.Add("Raiz del reino exterior");
	Hierbas.Add("Trebol gris del Reino Exterior");
}

void APocionDeFortunaDelReinoExterior::Preparar()
{
	//Registrar el tipo de preparacion
	GEngine->AddOnScreenDebugMessage(-1, 7.f, FColor::Yellow, TEXT("Elaboración de pocion a baja temperatura"));
}
