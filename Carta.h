#include <iostream>
#include <string>

using namespace std;

#ifndef CARTA_H
#define CARTA_H
class Carta{
    protected:
        string Valor;
        string Simbolo;
        string Color;
    public:
        Carta(string,string,string);
        Carta();
        string getValor();
        void setValor(string);

        string getSimbolo();
        void setSimbolo(string);

};
#endif