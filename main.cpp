#include <iostream>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include "Nokemon.hpp"
#include "AguacateMon.hpp"
#include "CharamuscoMon.hpp"
#include "AnafreMon.hpp"

using namespace std; 

int main(int argc, char** argv) {
	
	int opcion = 0; 
	while (opcion != 2){
		cout << "1) Simulador de batalla. " <<endl; 
		cout << "2) Salir. " <<endl;
		switch (opcion){
			case 1: 
				{
				cout << " SIMULADOR DE BATALLA: " <<endl; 
				break; 
				}//Fin del caso 1.
		}//Fin del switch que valida la opcion. 
	}//Fin del while que reinicia el programa. 
	return 0;
}