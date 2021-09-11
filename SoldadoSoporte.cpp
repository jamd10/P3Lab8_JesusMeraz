#include "SoldadoSoporte.h"
#include <string>
#include <fstream>

using namespace std;

SoldadoSoporte::SoldadoSoporte(string nombre, int vida, int fuerza, int blindaje, int camuflaje):Soldado(nombre){
	this-> nombre = nombre;
	this-> vida = vida;
	this-> fuerza = fuerza;
	this-> blindaje = blindaje;
	this-> camuflaje = camuflaje;
}
int SoldadoSoporte::ataque(){
	fuerza = fuerza * (15 + camuflaje);
	return fuerza;
}
int SoldadoSoporte::defensa(int ataque){
	vida = vida - (ataque / (blindaje * 2));
	return	vida; 
}
string SoldadoSoporte::toString(){
	return "vida  de soldado de soporte = " + std::to_string(vida);
}