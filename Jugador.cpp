#include "Jugador.h"

Jugador::Jugador(string Procedencia,string Apodo,double Dinero){
    this->Procedencia=Procedencia;
    this->Apodo=Apodo;
    this->Dinero=Dinero;
}
Jugador::Jugador(){

}void Jugador::setProcedencia(string Procedencia){
   this-> Procedencia=Procedencia;
}
string Jugador::getProcedencia(){
   return Procedencia;
}
void Jugador::setApodo(string Apodo){
   this-> Apodo=Apodo;
}
string Jugador::getApodo(){
   return Apodo;
}
void Jugador::setDinero(double Dinero){
   this-> Dinero=Dinero;
}
double Jugador::getDinero(){
   return Dinero;
}
