#include <iostream>
#include <string>
#include "Carta.h"

using namespace std;

#ifndef BARAJA_H
#define BARAJA_H
class Baraja{
    protected:
    	vector<Carta*> Cartas;
    public:
        Baraja();
        vector<Carta*> getCartas();
};
#endif	