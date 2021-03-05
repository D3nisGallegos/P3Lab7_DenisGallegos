#include <iostream>
#include <string>
#include "Ataque.hpp"
#include "Nokemon.hpp"

#pragma once

class Hierba : public Nokemon {
	
	public:
	Hierba(string, int, int, int, int , int); 
	Hierba ();
	virtual void inicializarAtaques(); 
	
	
}; 