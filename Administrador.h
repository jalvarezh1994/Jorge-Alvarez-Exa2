#include <iostream>
#include <string>

using namespace std;

#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H
class Administrador{
    protected:
        int Experiencia;
        string Rango;
        double Sueldo;
    public:
        Administrador(int,string,double);
        Administrador();
        int getExperiencia();
        void setExperiencia(int);

        string getRango();
        void setRango(string);

        double getSueldo();
        void setSueldo(double);

};
#endif