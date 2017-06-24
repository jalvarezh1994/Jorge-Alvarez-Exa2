#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <typeinfo>
#include <cstdlib>
#include <stdlib.h>
#include "Persona.h"
#include "Administrador.h"
#include "Repartidor.h"
#include "Baraja.h"
#include "Carta.h"
#include "Jugador.h"
#include "Mesa.h"

using namespace std;

int main(){
	vector<Persona*> vPersona;
	vector<Mesa*> vMesa;
	Administrador* adminDefecto=new Administrador("admin",23,"1234",5,"Gerente Tiempo Completo",10000);
	vPersona.push_back(adminDefecto);
	bool salir=false;
	do{
	//Login
		Persona* personaActual;
		string Nombre;
		string ID;
		cout<<"Bienvenido al programa."<<endl;
		cout<<"Ingrese (salir) en nombre o identidad para salir"<<endl;
		cout<<"Ingrese nombre: ";
		cin>>Nombre;
		cout<<"Ingrese identidad: ";
		cin>>ID;
		if (Nombre.compare("salir")==0||ID.compare("salir")==0){
			break;
		}
		bool existeUsuario=false;
		for (int i = 0; i < vPersona.size(); ++i){
			if (Nombre.compare(vPersona[i]->getNombre())==0){
				if (ID.compare(vPersona[i]->getID())==0){
					personaActual=vPersona[i];
					existeUsuario=true;
				}
			}
		}
		if (existeUsuario==false){
			cout<<"No existe el usuario"<<endl;
		}
		//Si es un administrador
		if (personaActual->getTipo().compare("Administrador")==0){
			int opcMenu;
			do{
				cout<<"Menú"<<endl;
				cout<<"1. Agregar"<<endl;
				cout<<"2. Listar"<<endl;
				cout<<"3. Modificar"<<endl;
				cout<<"4. Eliminar"<<endl;
				cout<<"5. Salir"<<endl;
				cout<<"Ingrese opción: "<<endl;
				cin>>opcMenu;
				switch(opcMenu){
					case 1:{
						cout<<"Menú agregar"<<endl;
						cout<<"1. Administrador"<<endl;
						cout<<"2. Repartidor"<<endl;
						cout<<"3. Jugador"<<endl;
						cout<<"4. Mesa"<<endl;
						int opcAgregar;
						cout<<"Ingrese la opción: ";
						cin>>opcAgregar;
						switch(opcAgregar){
							case 1:{
								string nombre;
								cout<<"Ingrese nombre: ";
								cin>>nombre;
								int edad;
								cout<<"Ingrese edad: ";
								cin>>edad;
								string id;
								cout<<"Ingrese id: ";
								cin>>id;
								int experiencia;
								cout<<"Ingrese experiencia: ";
								cin>>experiencia;
								string rango;
								cout<<"Ingrese rango: ";
								cin>>rango;
								double sueldo;
								cout<<"Ingrese sueldo: ";
								cin>>sueldo;
								Administrador* temporal=new Administrador(nombre,edad,id,experiencia,rango,sueldo);
								vPersona.push_back(temporal);
								break;
							}
							case 2:{
								string nombre;
								cout<<"Ingrese nombre: ";
								cin>>nombre;
								int edad;
								cout<<"Ingrese edad: ";
								cin>>edad;
								string id;
								cout<<"Ingrese id: ";
								cin>>id;
								double dificultad;
								cout<<"Ingrese dificultad: ";
								cin>>dificultad;
								Repartidor* temporal=new Repartidor(nombre,edad,id,dificultad);
								vPersona.push_back(temporal);
								break;
							}
							case 3:{
								string nombre;
								cout<<"Ingrese nombre: ";
								cin>>nombre;
								int edad;
								cout<<"Ingrese edad: ";
								cin>>edad;
								string id;
								cout<<"Ingrese id: ";
								cin>>id;
								string procedencia;
								cout<<"Ingrese procedencia: ";
								cin>>procedencia;
								string apodo;
								cout<<"Ingrese apodo: ";
								cin>>apodo;
								double dinero;
								cout<<"Ingrese dinero: ";
								cin>>dinero;
								Jugador* temporal=new Jugador(nombre,edad,id,procedencia,apodo,dinero);
								vPersona.push_back(temporal);
								break;
							}
							case 4:{
								int numero;
								cout<<"Ingrese numero de mesa: ";
								cin>>numero;
								string tipo;
								cout<<"Ingrese tipo (vip,clasica,viajero): ";
								cin>>tipo;
								int pos;
								Mesa* temporal=new Mesa(numero,tipo);
								do{
									for(int i=0;i<vPersona.size();i++){
										if (vPersona[i]->getTipo().compare("Jugador")==0){
											cout<<"Nombre: "<<" = "<<vPersona[i]->getNombre()<<endl;
											cout<<"Edad: "<<" = "<<vPersona[i]->getEdad()<<endl;
											cout<<"ID: "<<" = "<<vPersona[i]->getID()<<endl;
											Jugador* temporal=dynamic_cast<Jugador*>(vPersona[i]);
											cout<<"Procedencia: "<<" = "<<temporal->getProcedencia()<<endl;
											cout<<"Apodo: "<<" = "<<temporal->getApodo()<<endl;
											cout<<"Dinero: "<<" = "<<temporal->getDinero()<<endl;
										}
										cout<<endl;
									}
									int pos;
									cout<<"Ingrese posicion del jugador o (-1) para salir: ";
									cin>>pos;
									Jugador* jugadorTemporal=dynamic_cast<Jugador*>(vPersona[pos]);
									temporal->Jugadores.push_back(jugadorTemporal);
								}while(pos!=-1);
								for(int i=0;i<vPersona.size();i++){
									if (vPersona[i]->getTipo().compare("Repartidor")==0){
										cout<<"Nombre: "<<" = "<<vPersona[i]->getNombre()<<endl;
										cout<<"Edad: "<<" = "<<vPersona[i]->getEdad()<<endl;
										cout<<"ID: "<<" = "<<vPersona[i]->getID()<<endl;
									}
									cout<<endl;
								}
								int pos1;
								cout<<"Ingrese posicion del jugador: ";
								cin>>pos1;
								Repartidor* repartidorTemporal=dynamic_cast<Repartidor*>(vPersona[pos1]);
								temporal->repartidor=repartidorTemporal;
								vMesa.push_back(temporal);
								break;
							}
						}
						break;
					}//fin agregar
					case 2:{
						cout<<"Menú listar"<<endl;
						cout<<"1. Personas"<<endl;
						cout<<"2. Mesas"<<endl;
						int opcListar;
						cout<<"Ingrese la opción: ";
						cin>>opcListar;
						cout<<endl;
						switch(opcListar){
							case 1:{
								for(int i=0;i<vPersona.size();i++){
									cout<<"Nombre: "<<" = "<<vPersona[i]->getNombre()<<endl;
									cout<<"Edad: "<<" = "<<vPersona[i]->getEdad()<<endl;
									cout<<"ID: "<<" = "<<vPersona[i]->getID()<<endl;
									if (vPersona[i]->getTipo().compare("Administrador")==0){
										Administrador* temporal=dynamic_cast<Administrador*>(vPersona[i]);
										cout<<"Experiencia: "<<" = "<<temporal->getExperiencia()<<endl;
										cout<<"Rango: "<<" = "<<temporal->getRango()<<endl;
										cout<<"Sueldo: "<<" = "<<temporal->getSueldo()<<endl; 
									}
									if (vPersona[i]->getTipo().compare("Repartidor")==0){
										Repartidor* temporal=dynamic_cast<Repartidor*>(vPersona[i]);
										cout<<"Dificultad: "<<" = "<<temporal->getDificultad()<<endl;
										cout<<"Dinero del casino: "<<" = "<<temporal->getDineroCasino()<<endl;
									}
									if (vPersona[i]->getTipo().compare("Jugador")==0){
										Jugador* temporal=dynamic_cast<Jugador*>(vPersona[i]);
										cout<<"Procedencia: "<<" = "<<temporal->getProcedencia()<<endl;
										cout<<"Apodo: "<<" = "<<temporal->getApodo()<<endl;
										cout<<"Dinero: "<<" = "<<temporal->getDinero()<<endl;
									}
									cout<<endl;
								}
								break;
							}
							case 2:{
								for(int i=0;i<vMesa.size();i++){
									cout<<"Numero: "<<" = "<<vMesa[i]->getNumero()<<endl;
									cout<<"Tipo: "<<" = "<<vMesa[i]->getTipo()<<endl;
									cout<<endl;
								}
								break;
							}
							case 3:{
								break;
							}
						}
						break;
					}//fin listar
					case 3:{

					}//fin modificar
					case 4:{
						cout<<"Ingrese a listar para ver las posiciones"<<endl;
						cout<<"Desea eliminar"<<endl;
						cout<<"1. Persona"<<endl;
						cout<<"2. Mesa"<<endl;
						int respuesta;
						cout<<"Ingrese opcion: ";
						cin>>respuesta;
						if (respuesta==1){
							cout<<"Ingrese posicion: ";
							int posPersona;
							cin>>posPersona;
							vPersona.erase(vPersona.begin()+posPersona);
							cout<<"Eliminado"<<endl;
						}
						if (respuesta==2){
							cout<<"Ingrese posicion: ";
							int posPersona;
							cin>>posPersona;
							vMesa.erase(vMesa.begin()+posPersona);
							cout<<"Eliminado"<<endl;
						}
					}//fin eliminar
				}
			}while(opcMenu!=5);
		}
		//Si es un repartidor
		if (personaActual->getTipo().compare("Repartidor")==0){
			cout<<"No se puede jugar con un repartidor"<<endl;
		}
		//Si es un jugador
		if (personaActual->getTipo().compare("Jugador")==0){
			
			vector<int> posiciones;
			bool existeCarta;
			do{
				existeCarta=false;
				int x=rand()%52;
				for (int i = 0; i < 52; ++i){

				}
			} while (existeCarta==true);
		}
		cout<<endl;
	}while(salir==false);
	
	//Deletes
	for (int i = 0; i < vPersona.size(); ++i){
		delete vPersona[i];
	}
	for (int i = 0; i < vMesa.size(); ++i){
		delete vMesa[i];
	}
}
