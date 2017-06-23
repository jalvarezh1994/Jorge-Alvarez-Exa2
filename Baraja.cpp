#include "Baraja.h"

Baraja::Baraja(){
	string valor[14]={"A","1","2","3","4","5","6","7","8","9","10","J","Q","K"};
	string palo[4]={"diamante","corazon","trebol","pua"};
	for (int i = 0; i < 14; ++i){
		for (int i = 0; i < 2; ++i){
			Cartas.push_back(new Carta(valor[i],palo[i],"rojo"));
		}
	}
	for (int i = 0; i < 14; ++i){
		for (int i = 2; i < 5; ++i){
			Cartas.push_back(new Carta(valor[i],palo[i],"negro"));
		}
	}

}
