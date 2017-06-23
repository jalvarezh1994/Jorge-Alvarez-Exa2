#include <iostream>
#include <string>
#include "Persona.h"

using namespace std;

#ifndef JUGADOR_H
#define JUGADOR_H

class Jugador:public Persona{
    protected:
        string Procedencia;
        string Apodo;
        double Dinero;
    public:
        Jugador(string,int,string,string,string,double);
        Jugador();
        string getProcedencia();
        void setProcedencia(string);

        string getApodo();
        void setApodo(string);

        double getDinero();
        void setDinero(double);

        string getTipo();

};
#endif