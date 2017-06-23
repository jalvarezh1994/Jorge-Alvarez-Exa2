#include "Mesa.h"

Mesa::Mesa(int Numero,string Tipo){
    this->Numero=Numero;
    this->Tipo=Tipo;
}
Mesa::Mesa(){

}void Mesa::setNumero(int Numero){
   this-> Numero=Numero;
}
int Mesa::getNumero(){
   return Numero;
}
void Mesa::setTipo(string Tipo){
   this-> Tipo=Tipo;
}
string Mesa::getTipo(){
   return Tipo;
}
