#include <iostream>
#include <string>
#include "Persona.h"
#include "Baraja.h"

using namespace std;

#ifndef REPARTIDOR_H
#define REPARTIDOR_H

class Repartidor:public Persona{
    protected:
        double Dificultad;
        double DineroCasino;
        Baraja baraja;
    public:
        Repartidor(string,int,string,double);
        Repartidor();

        double getDificultad();
        void setDificultad(double);

        double getDineroCasino();
        void setDineroCasino(double);

        string getTipo();

};
#endif