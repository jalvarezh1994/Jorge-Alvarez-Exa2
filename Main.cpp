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
	
	//Autenticación
	bool 
	for (int i = 0; i < vPersona.size(); ++i){
		
	}
}

void menuAdministrador(vector<Persona*> vPersona,vector<Carta*> vCarta,vector<Mesa> vMesa){

	int opcMenu;
	do{
		cout<<"Menú"<<endl;
		cout<<"1. Agregar"<<endl;
		cout<<"2. Listar"<<endl;
		cout<<"3. Modificar"<<endl;
		cout<<"4. Eliminar"<<endl;
		cout<<"Ingrese opción: "<<endl;
		cin>>opcMenu;
		switch(opcMenu){
			case 1:{
				cout<<"Menú agregar"<<endl;
				cout<<"1. Persona"<<endl;
				cout<<"2. Administrador"<<endl;
				cout<<"3. Repartidor"<<endl;
				cout<<"4. Baraja"<<endl;
				cout<<"5. Carta"<<endl;
				cout<<"6. Jugador"<<endl;
				cout<<"7. Mesa"<<endl;
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
						Persona* temporal=new Persona(nombre,edad,id);
						vPersona.push_back(temporal);
						break;
					}
					case 2:{
						int experiencia;
						cout<<"Ingrese experiencia: ";
						cin>>experiencia;
						string rango;
						cout<<"Ingrese rango: ";
						cin>>rango;
						double sueldo;
						cout<<"Ingrese sueldo: ";
						cin>>sueldo;
						Administrador* temporal=new Administrador(experiencia,rango,sueldo);
						vPersona.push_back(temporal);
						break;
					}
					case 3:{
						double dificultad;
						cout<<"Ingrese dificultad: ";
						cin>>dificultad;
						Repartidor* temporal=new Repartidor(dificultad);
						vPersona.push_back(temporal);
						break;
					}
					case 4:{
						Baraja* temporal=new Baraja();
						vBaraja.push_back(temporal);
						break;
					}
					case 5:{
						string valor;
						cout<<"Ingrese valor: ";
						cin>>valor;
						string simbolo;
						cout<<"Ingrese simbolo: ";
						cin>>simbolo;
						Carta* temporal=new Carta(valor,simbolo);
						vCarta.push_back(temporal);
						break;
					}
					case 6:{
						string procedencia;
						cout<<"Ingrese procedencia: ";
						cin>>procedencia;
						string apodo;
						cout<<"Ingrese apodo: ";
						cin>>apodo;
				
						Jugador* temporal=new Jugador(procedencia,apodo,dinero);
				
						break;
					}
					case 7:{
						int numero;
						cout<<"Ingrese numero: ";
						cin>>numero;
						string tipo;
						cout<<"Ingrese tipo: ";
						cin>>tipo;
						Mesa* temporal=new Mesa(numero,tipo);
						vMesa.push_back(temporal);
						break;
					}
				}
				break;
			}
			case 2:
			{
				cout<<"Menú listar"<<endl;
				cout<<"1. Persona"<<endl;
				cout<<"2. Administrador"<<endl;
				cout<<"3. Repartidor"<<endl;
				cout<<"4. Baraja"<<endl;
				cout<<"5. Carta"<<endl;
				cout<<"6. Jugador"<<endl;
				cout<<"7. Mesa"<<endl;
				int opcListar;
				cout<<"Ingrese la opción: ";
				cin>>opcListar;
				switch(opcListar){
					case 1:
					for(int i=0;i<vPersona.size();i++){
						cout<<"Nombre"<<" = "<<vPersona[i]->getNombre();
						cout<<"Edad"<<" = "<<vPersona[i]->getEdad();
						cout<<"ID"<<" = "<<vPersona[i]->getID();
						cout<<endl;

					}break;
					case 2:
					for(int i=0;i<vPersona.size();i++){
						cout<<"Experiencia"<<" = "<<vPersona[i]->getExperiencia();
						cout<<"Rango"<<" = "<<vPersona[i]->getRango();
						cout<<"Sueldo"<<" = "<<vPersona[i]->getSueldo();
						cout<<endl;

					}break;
					case 3:
					for(int i=0;i<vPersona.size();i++){
						cout<<"Dificultad"<<" = "<<vPersona[i]->getDificultad();
						cout<<endl;

					}break;
					case 4:
					for(int i=0;i<vBaraja.size();i++){
						cout<<endl;

					}break;
					case 5:
					for(int i=0;i<vCarta.size();i++){
						cout<<"Valor"<<" = "<<vCarta[i]->getValor();
						cout<<"Simbolo"<<" = "<<vCarta[i]->getSimbolo();
				
						
				
						cout<<endl;

					}break;
					case 7:
					for(int i=0;i<vMesa.size();i++){
						cout<<"Numero"<<" = "<<vMesa[i]->getNumero();
						cout<<"Tipo"<<" = "<<vMesa[i]->getTipo();
						cout<<endl;

					}break;
				}
				break;
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
	}while(opcMenu!=8);
}