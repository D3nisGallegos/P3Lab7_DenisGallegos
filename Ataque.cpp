#include "Ataque.hpp"
#include <string>


Ataque :: Ataque(){
	
}

Ataque :: Ataque(string n, string t, int x){
	nombre = n; 
	tipo = t; 
	poder = x; 
}

string Ataque :: GETnombre(){
	return nombre; 
}

string Ataque :: GETtipo(){
	return tipo; 
	
}

int Ataque :: GETpoder (){
	return poder; 
}