#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <typeinfo>
#include "Persona.h"
#include "Administrador.h"
#include "Repartidor.h"
#include "Baraja.h"
#include "Carta.h"
#include "Jugador.h"
#include "Mesa.h"

using namespace std;

void menuAdministrador(vector<Persona*>,vector<Carta*>,vector<Mesa*>);

int main(){
	vector<Persona*> vPersona;
	vector<Carta*> vCarta;
	vector<Mesa*> vMesa;
	Administrador* adminDefecto=new Administrador("Admin",23,"1234",5,"Gerente Tiempo Completo",10000);
	
	//Login
	Persona* personaActual;
	string Nombre;
	string ID;
	cout<<"Bienvenido al programa."<<endl;
	cout<<"Ingrese nombre: "<<endl;
	cin>>Nombre;
	cout<<"Ingrese identidad: "<<endl;
	cin>>ID;
	for (int i = 0; i < vPersona.size(); ++i){
		if (vPersona[i]->getNombre().compare(Nombre)==0){
			if (vPersona[i]->getID().compare(ID)==0){
				personaActual=vPersona[i];
			}
		}
	}

	//Deletes
}

void menuAdministrador(vector<Persona*> vPersona,vector<Carta*> vCarta,vector<Mesa*> vMesa){

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
						Mesa* temporal=new Mesa(numero,tipo);
						vMesa.push_back(temporal);
						break;
					}
				}
				break;
			}
			case 2:{
				cout<<"Menú listar"<<endl;
				cout<<"1. Personas"<<endl;
				cout<<"2. Mesas"<<endl;
				cout<<"5. Salir"<<endl;
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
							if (typeid(*vPersona[i])==typeid(Administrador)){
								Administrador* temporal=reinterpret_cast<Administrador*>(vPersona[i]);
								cout<<"Experiencia: "<<" = "<<temporal->getExperiencia()<<endl;
								cout<<"Rango: "<<" = "<<temporal->getRango()<<endl;
								cout<<"Sueldo: "<<" = "<<temporal->getSueldo()<<endl;	
							}
							if (typeid(*vPersona[i])==typeid(Administrador)){
								Administrador* temporal=reinterpret_cast<Administrador*>(vPersona[i]);
								cout<<"Dificultad: "<<" = "<<temporal->getDificultad()<<endl;
								cout<<"Dinero del casino: "<<" = "<<temporal->getDineroCasino()<<endl;
							}
							if (typeid(*vPersona[i])==typeid(Administrador)){
								Administrador* temporal=reinterpret_cast<Administrador*>(vPersona[i]);
								cout<<"Dificultad: "<<" = "<<temporal->getDificultad()<<endl;
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
				case 3:{
					break;
				}
				case 4:{
					break;
				}
				case 5:{
					break;
				}
			}
		}
	}while(opcMenu!=5);
}