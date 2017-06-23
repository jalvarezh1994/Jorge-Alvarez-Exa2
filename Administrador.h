#include <iostream>
#include <string>
#include "Persona.h"
#include "Repartidor.h"
#include "Jugador.h"

using namespace std;

#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

class Administrador:public Persona{
    protected:
        int Experiencia;
        string Rango;
        double Sueldo;
        
    public:
        Administrador(string,int,string,int,string,double);
        Administrador();
        int getExperiencia();
        void setExperiencia(int);

        string getRango();
        void setRango(string);

        double getSueldo();
        void setSueldo(double);

};
#endif