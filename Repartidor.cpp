#include "Repartidor.h"

Repartidor::Repartidor(double Dificultad){
    this->Dificultad=Dificultad;
}
Repartidor::Repartidor(){

}void Repartidor::setDificultad(double Dificultad){
   this-> Dificultad=Dificultad;
}
double Repartidor::getDificultad(){
   return Dificultad;
}
