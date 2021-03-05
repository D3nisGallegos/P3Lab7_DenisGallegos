#include <iostream>
#include <string>
#include <vector>
#include "Ataque.hpp"

#pragma once

using namespace std; 

class Nokemon {

	public: 
	string nombre; 
	int vidamaxima;
	int vidaactual; 
	int ataque; 
	int defensa; 
	int nivel; 
	vector <Ataque*> ataques; 
	
	public:
	Nokemon(); 
	Nokemon(string, int, int, int, int , int); 
	Nokemon(string );
	string GETnombre();
	int GETvidamaxima(); 
	int GETvidaactual(); 
	int GETataque(); 
	int GETdefensa(); 
	int GETnivel(); 
	vector <Ataque*> GETataques();
	void SETnombre(string );
	void SETvidamaxima(int );
	void SETvidaactual(int ); 
	void SETataque(int );
	void SETdefensa(int );
	void SETnivel(int ); 
	void SETataques(vector <Ataque*>); 
	virtual void inicializarAtaques() = 0; 
		
}; 