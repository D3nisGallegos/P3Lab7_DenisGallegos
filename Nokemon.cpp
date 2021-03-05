#include <iostream>
#include <string>
#include "Nokemon.hpp"

Nokemon :: Nokemon(){
	
}

Nokemon :: Nokemon(string n, int vidam, int vidaac, int atq, int def, int lvl){
	nombre = n; 
	vidamaxima = vidam; 
	vidaactual = vidaac; 
	ataque = atq; 
	defensa = def; 
	nivel = lvl; 
}

string Nokemon :: GETnombre(){
	return nombre; 
}

int Nokemon :: GETvidamaxima(){
	return vidamaxima; 
}

int Nokemon :: GETvidaactual(){
	return vidaactual;
}

int Nokemon :: GETataque(){
	return ataque; 
}

int Nokemon :: GETdefensa(){
	return defensa; 
}

int Nokemon :: GETnivel(){
	
	return nivel; 
}

vector <Ataque*> Nokemon :: GETataques(){
	return ataques; 
}

void Nokemon :: SETnombre(string x){
	nombre = x; 
}

void Nokemon :: SETvidamaxima(int x){
	 vidamaxima = x; 
}

void Nokemon :: SETvidaactual(int x){
	vidaactual = x; 
}

void Nokemon :: SETataque(int x){
	ataque = x; 
}

void Nokemon :: SETdefensa(int x){
	defensa = x; 
}

void Nokemon :: SETnivel(int x){
	nivel = x; 
}

void Nokemon :: SETataques(vector <Ataque*> x){
	ataques = x; 
}