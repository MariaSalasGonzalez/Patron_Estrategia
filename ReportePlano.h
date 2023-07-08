#pragma once
#include "Persona.h"
#include "Reporte.h"

class ReportePlano : public Reporte {
public:
	ReportePlano();
	virtual ~ReportePlano();
	void encabezado();
	void mostrar(Persona* p);
};

//----Definicion de los metodos----

ReportePlano::ReportePlano(){
}

ReportePlano::~ReportePlano() {
}

void ReportePlano::encabezado() {
	cout << "*****  REPORTE PLANO  *****" << endl;
}

//Formato normal
void ReportePlano::mostrar(Persona* p) { //solo estoy reportando una la que llegue
	cout << p->toString().c_str()<<endl;
}