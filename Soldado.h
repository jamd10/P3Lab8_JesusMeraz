#ifndef SOLDADO_H
#define SOLDADO_H
#include <iostream>
#include <string>
using namespace std;
class Soldado
{
	
	public:
		string nombre;
		int vida;
		int fuerza;
		virtual int ataque() = 0;
		virtual int defensa(int) = 0;
		virtual string toString() = 0;
		Soldado(string);
		string getNombre();
		void setNombre(string);
	
};

#endif