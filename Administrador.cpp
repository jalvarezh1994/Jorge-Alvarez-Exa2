#include "Administrador.h"

Administrador::Administrador(){
	tipoPersona="Administrador";
}

Administrador::Administrador(string Nombre,int Edad,string ID,int Experiencia,string Rango,double Sueldo){
  this->Experiencia=Experiencia;
  this->Rango=Rango;
  this->Sueldo=Sueldo;
  this->Nombre=Nombre;
  this->Edad=Edad;
  this->ID=ID;
  tipoPersona="Administrador";
}

void Administrador::setExperiencia(int Experiencia){
 this-> Experiencia=Experiencia;
}

int Administrador::getExperiencia(){
 return Experiencia;
}

void Administrador::setRango(string Rango){
 this-> Rango=Rango;
}

string Administrador::getRango(){
 return Rango;
}

void Administrador::setSueldo(double Sueldo){
 this-> Sueldo=Sueldo;
}

double Administrador::getSueldo(){
 return Sueldo;
}