#ifndef SOLDADOASALTO_H
#define SOLDADOASALTO_H

#include "Soldado.h"

class SoldadoAsalto : public Soldado
{
	private:
		int velocidad;
		int fuerzaExtra;
		public:
		SoldadoAsalto();
		SoldadoAsalto(string, int, int, int, int);
		int ataque();
		int defensa(int);
		string toString();
		
};

#endif