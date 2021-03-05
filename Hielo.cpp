#include <iostream>
#include <string>
#include <math.h>
#include <time.h>
#include "Hielo.hpp"

Hielo :: Hielo(){
	
}

	Hielo :: Hielo(string n, int vm, int va, int a, int d, int lvl):Nokemon(n, vm, va, a, d, lvl){
		inicializarAtaques();
	}

void Hielo :: inicializarAtaques(){
	srand(time(NULL)); 
	int i1, i2, i3, i4, i5, i6; 
	Ataque* atq1 = new Ataque();
	Ataque* atq2 = new Ataque();
	for (int c = 0; c < 6; c++){
		i1 = 10 + (rand()% 10);
		i2 = 10 + (rand()% 10);
		i3 = 20 + (rand()% 20);
		i4 = 20 + (rand()% 20);
		i5 = 40 + (rand()% 20);
		i6 = 40 + (rand()% 20);
	}
	Ataque* at1 = new Ataque("Hielazo", "Hielo", i1); 
	Ataque* at2 = new Ataque("AlientoHelado", "Hielo", i2); 
	Ataque* at3 = new Ataque("Escarcha", "Hielo", i3);
	Ataque* at4 = new Ataque("Boladenieve", "Hielo", i4);
	Ataque* at5 = new Ataque("Esquimal", "Hielo", i5);
	Ataque* at6 = new Ataque("Avalancha", "Hielo", i6);    
	srand(time(NULL)); 
	for (int c = 0; c < 2; c++){
		int elem = 1 + (rand()% 5);
		if (c == 0){
			if (elem == 1){
				atq1 = at1; 
			}else if (elem == 2){
				atq1 = at2; 
			}else if (elem == 3){
				atq1 = at3;
			}else if (elem == 4){
				atq1 = at4; 
			}else if (elem == 5){
				atq1 = at5; 
			}else if (elem == 6){
				atq1 = at6; 
			}
		}else {
			if (elem == 1){
				atq2 = at1; 
			}else if (elem == 2){
				atq2 = at2; 
			}else if (elem == 3){
				atq2 = at3;
			}else if (elem == 4){
				atq2 = at4; 
			}else if (elem == 5){
				atq2 = at5; 
			}else if (elem == 6){
				atq2 = at6; 
			}
		}
	}
	ataques.push_back(atq1);
	ataques.push_back(atq2);
}
