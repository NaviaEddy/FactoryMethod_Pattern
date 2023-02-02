// Fill out your copyright notice in the Description page of Project Settings.


#include "PocionDePoderDelReinoInterior.h"

void APocionDePoderDelReinoInterior::BeginPlay()
{
	Super::BeginPlay();

	//Establecer los ingredientes
	NombreDeLaPocion = "Pocion de poder del reino interior";
	Viscosidad = "Mucosa";
	Sangre = "Sangre de orco";

	//Agregar las hierbas
	Hierbas.Add("Raiz del reino interior");
	Hierbas.Add("Sabio del Reino Interior");

}

void APocionDePoderDelReinoInterior::Preparar()
{
	//Registrar el tipo de preparacion
	GEngine->AddOnScreenDebugMessage(-1, 7.f, FColor::Yellow, TEXT("Elaboración de pocion a alta temperatura"));
}
