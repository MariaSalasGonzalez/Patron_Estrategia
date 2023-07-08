#pragma once
#include "Persona.h"

class Reporte { //Interfaz.... <<Abstract>>
public:
	virtual void encabezado() = 0;
	virtual void mostrar(Persona*) = 0;


};