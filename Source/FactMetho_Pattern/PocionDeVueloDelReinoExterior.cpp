// Fill out your copyright notice in the Description page of Project Settings.


#include "PocionDeVueloDelReinoExterior.h"

void APocionDeVueloDelReinoExterior::BeginPlay()
{
	Super::BeginPlay();

	//Establecer los ingredientes
	NombreDeLaPocion = "Pocion de vuelo del reino exterior";
	Viscosidad = "No mucosa";
	Sangre = "Sangre de orco";

	//Agregar las hierbas
	Hierbas.Add("Raiz del reino exterior");

}

void APocionDeVueloDelReinoExterior::Preparar()
{
	//Registrar el tipo de preparacion
	GEngine->AddOnScreenDebugMessage(-1, 7.f, FColor::Yellow, TEXT("Elaboración de pocion a baja temperatura"));
}
