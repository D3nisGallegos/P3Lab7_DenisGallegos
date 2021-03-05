#include <iostream>
#include <string>
#include "Ataque.hpp"
#include "Nokemon.hpp"

#pragma once

using namespace std; 

class Hielo : public Nokemon {

	public: 
	Hielo(string, int, int, int, int , int); 
	Hielo ();
	virtual void inicializarAtaques(); 
	
	
}; 