#include <iostream>
#include <string>
#include "WarSimulator.h"
#include <time.h>
#include "Soldado.h"
#include "SoldadoAsalto.h"
#include "SoldadoSoporte.h"
#include <vector>
using namespace std;
int menu();
int main(int argc, char** argv) {
	WarSimulator* lista = new WarSimulator();
	int op = menu();
	srand (time(NULL));
	while(op != 7){
		switch(op){
			case 1:{
				string nombre1, nombre2;
				int vida = 100, fuerza, velocidad, fuerzaExtra;
				cout<<"********** Menu **********"<<endl;
				cout<<"* 1. Soldado de asalto   *"<<endl;
				cout<<"* 2. Soldado de soporte  *"<<endl;
				cout<<"**************************"<<endl;
				cout<<"Ingrese una opcion: "<<endl;
				int soldado;
				cin>>soldado;				
				if(soldado == 1){
					cout<<"Ingrese nombre soldado equipo 1: "<<endl;
					cin>> nombre1;
					cout<<"Ingrese nombre soldado equipo 2: "<<endl;
					cin>> nombre2;
					fuerza = +rand()%100;
					velocidad = +rand()%30;
					fuerzaExtra = +rand()%30;
					SoldadoAsalto* soldier1 = new SoldadoAsalto(nombre1, vida, fuerza, velocidad, fuerzaExtra);
					SoldadoAsalto* soldier2 = new SoldadoAsalto(nombre2, vida, fuerza, velocidad, fuerzaExtra);
					lista ->  agregarEquipo1(soldier1);
					lista ->  agregarEquipo2(soldier2);
					cout<<"Saldodao de asalto agregado exitosamente"<<endl;
				}else if(soldado == 2){
					string nombre1, nombre2;
					int vida = 100, fuerza, blindaje, camuflaje;
					cout<<"Ingrese nombre soldado equipo 1: "<<endl;
					cin>> nombre1;
					cout<<"Ingrese nombre soldado equipo 2: "<<endl;
					cin>> nombre2;
					fuerza = +rand()%100;
					blindaje = +rand()%30;
					camuflaje = +rand()%30;
					SoldadoAsalto* soldier1 = new SoldadoAsalto(nombre1, vida, fuerza, blindaje, camuflaje);
					SoldadoAsalto* soldier2 = new SoldadoAsalto(nombre2, vida, fuerza, blindaje, camuflaje);
					lista ->  agregarEquipo1(soldier1);
					lista ->  agregarEquipo2(soldier2);
					cout<<"Saldodao de soporte agregado exitosamente"<<endl;
				}else{
					cout<<"Error, opcion incorrecta"<<endl;
				}
				
				break;
			}
							
			case 2:{
				lista-> imprimir();
				cout<<"Ingrese numero para eliminar soldados: "<<endl;
				int opcion;
				cin>>opcion;
				lista-> eliminar(opcion);
				break;
			}
			case 3:{
			lista-> imprimir();
				break;
			}
			case 4:{
				// sin tiempo me quede :c
				break;
			}
			case 5:{
				// sin tiempo me quede :c
				break;
			}
			case 6:{
				char cont = 's';
				while(cont == 's'){
					lista-> simularBatalla();
					cout<<"1. si, 2. no"<< endl;
					cout<<"Continuar"<< endl;
					int d; 
					cin>>d;
					if(d == 1){
						cont = 's';
					}else{
						cont = 'n';
					}
				}
				break;
			}
			default: {
				cout<<"Opcion invalida"<< endl;
				menu();
				break;
			}
		}
		op = menu();
	}
	delete lista;
	return 0;
}
int menu(){
	int opcion = 0;
	cout<<"********** Menu **********"<<endl;
	cout<<"* 1. Crear soldado       *"<<endl;
	cout<<"* 2. Eliminar soldado    *"<<endl;
	cout<<"* 3. Listar soldado      *"<<endl;
	cout<<"* 4. Guardar archivo     *"<<endl;
	cout<<"* 5. Cargar archivo      *"<<endl;
	cout<<"* 6. Simulacion          *"<<endl;
	cout<<"* 7. Salir               *"<<endl;
	cout<<"**************************"<<endl;
	cout<<"Elija una opcion: "<<endl;
	cin>> opcion;
	return opcion;
}