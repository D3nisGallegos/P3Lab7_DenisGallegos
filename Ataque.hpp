#include <iostream>
#include <cstring>
#include <string>
#include <vector>

#pragma once

using namespace std; 

class Ataque {
	
	public: 
	string nombre; 
	string tipo; 
	int poder; 
	
	public: 
	Ataque(); 
 	string GETnombre();
 	string GETtipo(); 
 	int GETpoder();
	
	
};