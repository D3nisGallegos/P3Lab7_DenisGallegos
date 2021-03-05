#include <iostream>
#include <string>
#include "Nokemon.hpp"

using namespace std; 

class SimuladorBatalla {
	
	protected: 
	Nokemon noke1;
	Nokemon noke2;
	
	public: 
	SimuladorBatlla (); 
	SimuladorBatalla(Nokemon, Nokemon); 
	void SimularBatalla();  
	Nokemon GETnoke1();
	Nokemon GETnoke2();
	
};