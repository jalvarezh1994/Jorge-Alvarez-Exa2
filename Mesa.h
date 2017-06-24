#include <iostream>
#include <string>
#include "Persona.h"
#include "Repartidor.h"
#include "Jugador.h"

using namespace std;

#ifndef MESA_H
#define MESA_H
class Mesa{
    protected:
        int Numero;
        string Tipo;
    public:
        Mesa(int,string);
        Mesa();
        int getNumero();
        void setNumero(int);

        string getTipo();
        void setTipo(string);

        vector<Jugador*> Jugadores;
        Repartidor repartidor;

};
#endif