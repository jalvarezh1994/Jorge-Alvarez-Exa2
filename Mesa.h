#include <iostream>
#include <string>

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

};
#endif