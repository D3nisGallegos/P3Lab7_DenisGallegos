#include <iostream>
#include <string>

#pragma once

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
 	void SETnombre(string );
 	void SETtipo(string );
 	void SETpoder(int ); 
 	
	
	
};