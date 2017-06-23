#include <iostream>
#include <string>

using namespace std;

#ifndef REPARTIDOR_H
#define REPARTIDOR_H
class Repartidor{
    protected:
        double Dificultad;
    public:
        Repartidor(double);
        Repartidor();
        double getDificultad();
        void setDificultad(double);

};
#endif