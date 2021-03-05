#include <iostream>
#include <string>
#include "Ataque.hpp"
#include "Nokemon.hpp"

#pragma once

using namespace std; 

class Fuego : public Nokemon {  

	
	public: 
	Fuego(string, int, int, int, int , int); 
	Fuego ();
	virtual void inicializarAtaques(); 
	
	
}; 