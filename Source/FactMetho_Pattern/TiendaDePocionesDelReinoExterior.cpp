// Fill out your copyright notice in the Description page of Project Settings.


#include "TiendaDePocionesDelReinoExterior.h"
#include "PocionDeEnergiaDelReinoExterior.h"
#include "PocionDeFortunaDelReinoExterior.h"
#include "PocionDeVueloDelReinoExterior.h"

APocion* ATiendaDePocionesDelReinoExterior::PrepararPocion(FString _Pocion)
{
    //Selecciona que pocion generar en funcion de la cadena introducida
    if (_Pocion.Equals("Energia")) {
        return GetWorld()->SpawnActor<APocionDeEnergiaDelReinoExterior>(APocionDeEnergiaDelReinoExterior::StaticClass());
    }
    else if (_Pocion.Equals("Fortuna")) {
        return GetWorld()->SpawnActor<APocionDeFortunaDelReinoExterior>(APocionDeFortunaDelReinoExterior::StaticClass());
    }
    else if (_Pocion.Equals("Vuelo")) {
        return GetWorld()->SpawnActor<APocionDeVueloDelReinoExterior>(APocionDeVueloDelReinoExterior::StaticClass());
    }
    else return nullptr; //Devuelve null si la cadena no es válida
}
