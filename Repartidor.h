#include <iostream>
#include <string>
#include "Persona.h"

using namespace std;

#ifndef REPARTIDOR_H
#define REPARTIDOR_H

class Repartidor{
    protected:
        double Dificultad;
    public:
        Repartidor(string,int,string,double);
        Repartidor();
        double getDificultad();
        void setDificultad(double);

};
#endif