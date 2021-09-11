#include "WarSimulator.h"
#include "SoldadoAsalto.h"
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <time.h>
using std::vector;
using namespace std;
WarSimulator::WarSimulator() {
}
WarSimulator::~WarSimulator() {
	for(int i = 0; i<equipo1.size(); i++) {
		if(equipo1[i] != NULL){
			delete equipo1.at(i);
		}
	}
	for(int i = 0; i<equipo2.size(); i++) {
		if(equipo2[i] != NULL){
			delete equipo2.at(i);
		}
	}
}

vector<Soldado*> WarSimulator::getVector1() {
	return this->equipo1;
}

void WarSimulator::agregarEquipo1(Soldado* e1) {
	equipo1.push_back(e1);
}
vector<Soldado*> WarSimulator::getVector2() {
	return this->equipo2;
}

void WarSimulator::agregarEquipo2(Soldado* e2) {
	equipo2.push_back(e2);
}

void WarSimulator::imprimir(){
	for(int i = 0; i < equipo1.size(); i++){
		cout<<i<<", Equipo 1: "<<equipo1[i]->getNombre()<<", "<< endl;
	}
	for(int i = 0; i < equipo2.size(); i++){
		cout<<i<<", Equipo 2: "<<equipo2[i]->getNombre()<<", "<< endl;
	}
}
	void WarSimulator::eliminar(int pos){
		equipo1.erase(begin(equipo1)+pos);
		equipo2.erase(begin(equipo2)+pos);
	}
	void WarSimulator::simularBatalla(){
		int soldadoAleatorio1  = +rand()%equipo1.size();
		int soldadoAleatorio2  = +rand()%equipo2.size();
		equipo1[soldadoAleatorio1]->defensa(equipo2[soldadoAleatorio2]->ataque());
		equipo2[soldadoAleatorio2]->defensa(equipo1[soldadoAleatorio1]->ataque());
		cout<<equipo1[soldadoAleatorio2]->toString()<<endl;
		cout<<equipo2[soldadoAleatorio2]->toString()<<endl;
		if(equipo1[soldadoAleatorio1]->defensa(equipo2[soldadoAleatorio2]->ataque()) < 1){
			equipo1.erase(begin(equipo1)+soldadoAleatorio1);
		}else if(	equipo2[soldadoAleatorio2]->defensa(equipo1[soldadoAleatorio1]->ataque()) < 1){
			equipo2.erase(begin(equipo2)+soldadoAleatorio2);
		}
		if(equipo1.size() == 0){
			cout<<"la guerra acabo, el equipo 2 gano la guerra"<<endl;
		}else if(equipo2.size() == 0){
				cout<<"la guerra acabo, el equipo 1 gano la guerra"<<endl;
		}
	}
	void WarSimulator::cargarArchivo(){
		
	}
	void WarSimulator::escribirArchivo(){
		
	}