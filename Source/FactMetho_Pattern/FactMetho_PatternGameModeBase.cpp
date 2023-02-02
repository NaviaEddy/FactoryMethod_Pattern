// Copyright Epic Games, Inc. All Rights Reserved.


#include "FactMetho_PatternGameModeBase.h"
#include "TiendaDePociones.h"
#include "TiendaDePocionesDelReinoInterior.h"
#include "TiendaDePocionesDelReinoExterior.h"

AFactMetho_PatternGameModeBase::AFactMetho_PatternGameModeBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AFactMetho_PatternGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	//Creando la tienda de pociones del reino interior
	ATiendaDePociones* TiendaDelReinoInterior = GetWorld()->SpawnActor<ATiendaDePocionesDelReinoInterior>(ATiendaDePocionesDelReinoInterior::StaticClass());

	//Crea una poción de salud interior y registra su nombre
	APocion* PocionInterior = TiendaDelReinoInterior->EncargarPocion("Salud");
	GEngine->AddOnScreenDebugMessage(-1, 7.f, FColor::Yellow, FString::Printf(TEXT("%s"), *PocionInterior->ObtenerNombreDeLaPocion()));

	//Crea una poción de poder interior y registra su nombre
	PocionInterior = TiendaDelReinoInterior->EncargarPocion("Poder");
	GEngine->AddOnScreenDebugMessage(-1, 7.f, FColor::Yellow, FString::Printf(TEXT("%s"), *PocionInterior->ObtenerNombreDeLaPocion()));
	
	//Crea una poción de talento interior y registra su nombre
	PocionInterior = TiendaDelReinoInterior->EncargarPocion("Talento");
	GEngine->AddOnScreenDebugMessage(-1, 7.f, FColor::Yellow, FString::Printf(TEXT("%s"), *PocionInterior->ObtenerNombreDeLaPocion()));
	GEngine->AddOnScreenDebugMessage(-1, 7.f, FColor::Blue, FString::Printf(TEXT("POCIONES DEL REINO INTERIOR")));

	//Temporizador para la creacion de la tienda de pociones del reino exterior
	GetWorldTimerManager().SetTimer(TimerHandle, this, &AFactMetho_PatternGameModeBase::PocionesDelReinoExterior, 8.0f, false);

}

void AFactMetho_PatternGameModeBase::PocionesDelReinoExterior()
{
	//Creando la tienda de pociones del reino exterior
	ATiendaDePociones* TiendaDelReinoExterior = GetWorld()->SpawnActor<ATiendaDePocionesDelReinoExterior>(ATiendaDePocionesDelReinoExterior::StaticClass());

	//Crea una poción de vuelo exterior y registra su nombre
	APocion* PocionExterior = TiendaDelReinoExterior->EncargarPocion("Energia"); 
	GEngine->AddOnScreenDebugMessage(-1, 7.f, FColor::Yellow, FString::Printf(TEXT("%s"), *PocionExterior->ObtenerNombreDeLaPocion()));

	//Crea una poción de fortuna exterior y registra su nombre
	PocionExterior = TiendaDelReinoExterior->EncargarPocion("Vuelo");
	GEngine->AddOnScreenDebugMessage(-1, 7.f, FColor::Yellow, FString::Printf(TEXT("%s"), *PocionExterior->ObtenerNombreDeLaPocion()));

	//Crea una poción de energia exterior y registra su nombre
	PocionExterior = TiendaDelReinoExterior->EncargarPocion("Fortuna");
	GEngine->AddOnScreenDebugMessage(-1, 7.f, FColor::Yellow, FString::Printf(TEXT("%s"), *PocionExterior->ObtenerNombreDeLaPocion()));
	GEngine->AddOnScreenDebugMessage(-1, 7.f, FColor::Blue, FString::Printf(TEXT("POCIONES DEL REINO EXTERIOR")));
}

void AFactMetho_PatternGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
