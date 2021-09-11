#include "SoldadoAsalto.h"
#include <string>
#include <fstream>
#include "Soldado.h"
using namespace std;

SoldadoAsalto::SoldadoAsalto(string nombre, int vida, int fuerza, int velocidad, int fuerzaExtra):Soldado(nombre){
	this-> nombre = nombre;
	this-> vida = vida;
	this-> fuerza = fuerza;
	this-> velocidad = velocidad;
	this-> fuerzaExtra = fuerzaExtra;
}

int SoldadoAsalto::ataque(){
	fuerza = fuerza * (10 + (velocidad * 2));
	return fuerza;
}
int SoldadoAsalto::defensa(int ataque){
	vida = vida - (ataque / fuerzaExtra);	
	return vida;
}

string SoldadoAsalto::toString(){
	return "vida de soldado de asalto " + nombre + ": " + std::to_string(vida);
}