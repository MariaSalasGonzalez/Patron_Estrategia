#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Persona {
private:
	string cedula;
	string nombre;
	string apellido;
public:
	Persona(string = "", string = "", string = "");
	virtual ~Persona();
	virtual string toString();
	virtual string getCedula();
	virtual string getNombre();
	virtual string getApellido();
};

//----Definicion de los metodos----
Persona::Persona(string ced, string nom, string ape):
           cedula(ced), nombre(nom), apellido(ape){
}

Persona:: ~Persona() {
}

string Persona::toString() {
	stringstream s;
	s << "---Datos de Persona---" << endl;
	s << "Cedula: " << cedula << endl;
	s << "Nombre: " << nombre << endl;
	s << "Apellido: " << apellido << endl;

	return s.str();
}

string Persona::getCedula() {
	return cedula;
}

string Persona::getNombre() {
	return nombre;
}

string Persona::getApellido() {
	return apellido;
}