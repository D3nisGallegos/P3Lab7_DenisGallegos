#include <iostream>
#include <string>
#include <math.h>
#include <time.h>
#include "SimuladorBatalla.hpp"

SimuladorBatalla :: SimuladorBatalla(){
	
}

SimuladorBatalla :: SimuladorBatalla(Nokemon* x1, Nokemon* x2){
	noke1 = x1; 
	noke2 = x2; 
}

Nokemon* SimuladorBatalla :: GETnoke1(){
	return noke1; 
}

Nokemon* SimuladorBatalla :: GETnoke2(){
	return noke2; 
}

void SimuladorBatalla :: SimularBatalla(){
	bool ganar = false;  
	int turno = 1; 
	while (ganar == true){
		srand(time(NULL));
		int elem = 1 + (rand()% 1);
		int poder =0; 
		if (elem == 1){
			Ataque* atq = noke1->GETataques() [0];
			poder = (int) atq->GETpoder();
		}else {
			Ataque* atq = noke1->GETataques() [1];
			poder = (int) atq->GETpoder();
		}
		double paren1 = (double) ((2 * noke1->GETnivel()) / 5) + 2; 
		double parent2 = (double) (noke1->GETataque() / noke2->GETdefensa()); 
		double num = (double) paren1 * parent2 * poder; 
		double final = (double) (num / 50) + 2; 
		int fin = ceil(final);
		if (turno == 1){
			int n = noke1->GETvidaactual();
			noke1->SETvidaactual(n - fin); 
			turno = 2;
			if (noke1->GETvidaactual() <= 0){
				ganar = true; 
				cout << "Gano el generado" <<endl;
			}
		}else{
			int n = noke2->GETvidaactual();
			noke2->SETvidaactual(n - fin); 
			turno = 1; 
			if (noke2->GETvidaactual() <= 0){
				ganar = true; 
				cout << "GANO EL SUYO ";
			}
		}
	}
}