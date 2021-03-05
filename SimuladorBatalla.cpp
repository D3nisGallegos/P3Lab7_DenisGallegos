#include <iostream>
#include <string>
#include "SimuladorBatalla.hpp"

SimuladorBatalla :: SimuladorBatalla(){
	
}

SimuladorBatalla :: SimuladorBatalla(Nokemon x1, Nokemon x2){
	noke1 = x1; 
	noke2 = x2; 
}

SimuladorBatalla :: SimuladorBatalla GETnoke1(){
	return noke1; 
}

SimuladorBatalla :: SimuladorBatalla GETnoke2(){
	return noke2; 
}

SimuladorBatalla :: SimularBatalla(){
	
}