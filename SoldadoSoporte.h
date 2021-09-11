#ifndef SOLDADOSOPORTE_H
#define SOLDADOSOPORTE_H

#include "Soldado.h"

class SoldadoSoporte : public Soldado
{
	private:
		int blindaje;
		int camuflaje;
	public:
		SoldadoSoporte();
		SoldadoSoporte(string, int, int, int, int);
		int ataque();
		int defensa(int);
		int getNombre();
		void setNombre(string);
		string toString();
};

#endif