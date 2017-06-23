#include "Repartidor.h"

Repartidor::Repartidor(){
}

Repartidor::Repartidor(string Nombre,int Edad,string ID,double Dificultad){
    this->Dificultad=Dificultad;
    this->Nombre=Nombre;
    this->Edad=Edad;
    this->ID=ID;
}

void Repartidor::setDificultad(double Dificultad){
   this-> Dificultad=Dificultad;
}

double Repartidor::getDificultad(){
   return Dificultad;
}

void Repartidor::setDineroCasino(double DineroCasino){
	this->DineroCasino=DineroCasino;
}

double Repartidor::getDineroCasino(){
	return DineroCasino;
}

string Repartidor::getTipo(){
	return "Repartidor";
}