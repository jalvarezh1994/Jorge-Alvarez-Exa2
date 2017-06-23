#include <iostream>
#include <string>

using namespace std;

#ifndef JUGADOR_H
#define JUGADOR_H
class Jugador{
    protected:
        string Procedencia;
        string Apodo;
        double Dinero;
    public:
        Jugador(string,string,double);
        Jugador();
        string getProcedencia();
        void setProcedencia(string);

        string getApodo();
        void setApodo(string);

        double getDinero();
        void setDinero(double);

};
#endif