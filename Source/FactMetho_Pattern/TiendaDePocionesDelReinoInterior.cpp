// Fill out your copyright notice in the Description page of Project Settings.


#include "TiendaDePocionesDelReinoInterior.h"
#include "PocionDeSaludDelReinoInterior.h"
#include "PocionDePoderDelReinoInterior.h"
#include "PocionDeTalentoDelReinoInterior.h"

APocion* ATiendaDePocionesDelReinoInterior::PrepararPocion(FString _Pocion)
{
    //Selecciona que pocion generar en funcion de la cadena introducida
    if (_Pocion.Equals("Salud")) {
        return GetWorld()->SpawnActor<APocionDeSaludDelReinoInterior>(APocionDeSaludDelReinoInterior::StaticClass());
    }
    else if (_Pocion.Equals("Poder")) {
        return GetWorld()->SpawnActor<APocionDePoderDelReinoInterior>(APocionDePoderDelReinoInterior::StaticClass());
    }
    else if (_Pocion.Equals("Talento")) {
        return GetWorld()->SpawnActor<APocionDeTalentoDelReinoInterior>(APocionDeTalentoDelReinoInterior::StaticClass());
    }
    else return nullptr; //Devuelve null si la cadena no es válida

}
