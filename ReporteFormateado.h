#pragma once
#include "Persona.h"
#include "Reporte.h"

class ReporteFormateado : public Reporte {
public:
	ReporteFormateado();
	virtual ~ReporteFormateado();
	void encabezado();
	void mostrar(Persona* p);
};

//----Definicion de los metodos----

ReporteFormateado::ReporteFormateado() {
}

ReporteFormateado::~ReporteFormateado() {
}

void ReporteFormateado::encabezado() {
	cout << "*****  REPORTE FORMATEADO  *****" << endl;
}

//Formato XMX...
void ReporteFormateado::mostrar(Persona* p) { //solo estoy reportando una la que llegue
	cout << "<Empleado> " << endl
		 << "<Cedula> " << p->getCedula() << "<//Cedula>" << endl
		 << "<Nombre> " << p->getNombre() << "<//Nombre>" << endl
		 << "<Apellido> " << p->getApellido() << "<//Apellido>" << endl
		 << "<//Empleado " << endl;
}
