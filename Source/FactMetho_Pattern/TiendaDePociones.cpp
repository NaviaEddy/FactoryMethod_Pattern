// Fill out your copyright notice in the Description page of Project Settings.


#include "TiendaDePociones.h"

// Sets default values
ATiendaDePociones::ATiendaDePociones()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATiendaDePociones::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATiendaDePociones::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

APocion* ATiendaDePociones::EncargarPocion(FString _Categoria)
{
	//Crear la pocion y registrar su nombre
	APocion* Pocion = PrepararPocion(_Categoria);
	GEngine->AddOnScreenDebugMessage(-1, 7.f, FColor::Yellow, FString::Printf(TEXT("Preparando %s"), *Pocion->ObtenerNombreDeLaPocion()));

	//Start the concoct process
	Pocion->Ebullicion();
	Pocion->Burbujear();
	Pocion->Preparar();
	Pocion->Embotellar();

	//Returns the created potion
	return Pocion;

}
