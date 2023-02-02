// Fill out your copyright notice in the Description page of Project Settings.


#include "PocionDeTalentoDelReinoInterior.h"

void APocionDeTalentoDelReinoInterior::BeginPlay()
{
	Super::BeginPlay();

	//Establecer los ingredientes
	NombreDeLaPocion = "Pocion de talento del reino interior";
	Viscosidad = "Mucosa";
	Sangre = "Sangre de orco";

	//Agregar las hierbas
	Hierbas.Add("Raiz del reino interior");
	Hierbas.Add("Trebol Rojo del Reino Interior");
	Hierbas.Add("Roja salvaje del Reino Interior");
	Hierbas.Add("Milenrama del Reino Interior");

}

void APocionDeTalentoDelReinoInterior::Preparar()
{
	//Registrar el tipo de preparacion
	GEngine->AddOnScreenDebugMessage(-1, 7.f, FColor::Yellow, TEXT("Elaboración de pocion a alta temperatura"));
}
