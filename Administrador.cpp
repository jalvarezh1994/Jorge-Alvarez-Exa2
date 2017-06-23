#include "Administrador.h"

Administrador::Administrador(int Experiencia,string Rango,double Sueldo){
    this->Experiencia=Experiencia;
    this->Rango=Rango;
    this->Sueldo=Sueldo;
}
Administrador::Administrador(){

}void Administrador::setExperiencia(int Experiencia){
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
