#ifndef WARSIMULATOR_H
#define WARSIMULATOR_H
#include <string>
#include <vector>
#include "Soldado.h"
class WarSimulator
{
	private:
	vector <Soldado*> equipo1;
	vector <Soldado*> equipo2;
	public:
	WarSimulator();
	~WarSimulator();
	void agregarEquipo1(Soldado*);
	vector<Soldado*> getVector1();
	void agregarEquipo2(Soldado*);
	vector<Soldado*> getVector2();
	void eliminar(int);
	void imprimir();
	void simularBatalla();
	void cargarArchivo();
	void escribirArchivo();
};


#endif