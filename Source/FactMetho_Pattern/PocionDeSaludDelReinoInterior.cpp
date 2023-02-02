// Fill out your copyright notice in the Description page of Project Settings.


#include "PocionDeSaludDelReinoInterior.h"

void APocionDeSaludDelReinoInterior::BeginPlay()
{
	Super::BeginPlay();

	//Establecer los ingredientes
	NombreDeLaPocion = "Pocion de salud del reino interior";
	Viscosidad = "Mucosa";
	Sangre = "Sangre de orco";

	//Agregando las hierbas
	Hierbas.Add("Raíz del reino interior");
}

void APocionDeSaludDelReinoInterior::Preparar()
{
	//Registrar el tipo de preparacion
	GEngine->AddOnScreenDebugMessage(-1, 7.f, FColor::Yellow, TEXT("Elaboración de pocion a alta temperatura"));

}
