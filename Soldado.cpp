#include "Soldado.h"
Soldado::Soldado(string nombre){
	this -> nombre = nombre;
}
string Soldado::getNombre(){
	return 	this-> nombre;
}
void Soldado::setNombre(string nombre){
	this-> nombre = nombre;;
}
int Soldado::ataque(){
	return fuerza;
}
int Soldado::defensa(int ataque){
	return vida;	
}
string Soldado::toString(){
	return "";
}