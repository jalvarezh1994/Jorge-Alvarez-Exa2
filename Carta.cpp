#include "Carta.h"

Carta::Carta(string Valor,string Simbolo,string Color){
    this->Valor=Valor;
    this->Simbolo=Simbolo;
    this->Color=Color;
}
Carta::Carta(){

}void Carta::setValor(string Valor){
   this-> Valor=Valor;
}
string Carta::getValor(){
   return Valor;
}
void Carta::setSimbolo(string Simbolo){
   this-> Simbolo=Simbolo;
}
string Carta::getSimbolo(){
   return Simbolo;
}
