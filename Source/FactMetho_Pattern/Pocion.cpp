// Fill out your copyright notice in the Description page of Project Settings.


#include "Pocion.h"

// Sets default values
APocion::APocion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Hierbas = TArray<FString>();

}

// Called when the game starts or when spawned
void APocion::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APocion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APocion::Ebullicion()
{
	//Registrar el procedimiento de ebullición
	GEngine->AddOnScreenDebugMessage(-1, 7.f, FColor::Yellow, FString::Printf(TEXT("Hirviendo %s"), *ObtenerNombreDeLaPocion()));
	GEngine->AddOnScreenDebugMessage(-1, 7.f, FColor::Yellow, FString::Printf(TEXT("Gota de sangre")));
	GEngine->AddOnScreenDebugMessage(-1, 7.f, FColor::Yellow, FString::Printf(TEXT("Hierbas aromáticas")));
}

void APocion::Burbujear()
{
	//Registrar el procedimiento de burbujeo
	GEngine->AddOnScreenDebugMessage(-1, 7.f, FColor::Yellow, FString::Printf(TEXT("Burbuja para tres lunas y una puesta de sol")));
}

void APocion::Preparar()
{
	//Registrar el procedimiento de preparacion
	GEngine->AddOnScreenDebugMessage(-1, 7.f, FColor::Yellow, FString::Printf(TEXT("Elaboración de pocion a baja temperatura")));

}

void APocion::Embotellar()
{
	//Registrar el procedimiento de embotellado
	GEngine->AddOnScreenDebugMessage(-1, 7.f, FColor::Yellow, FString::Printf(TEXT("Embotella la pocion en el frasco")));

}

FString APocion::ObtenerNombreDeLaPocion()
{
	//Devolver el nombre de la pocion preparada
	return NombreDeLaPocion;
}

