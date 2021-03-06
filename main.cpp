#include <iostream>
#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <math.h>
#include "Nokemon.hpp"
#include "AguacateMon.hpp"
#include "CharamuscoMon.hpp"
#include "AnafreMon.hpp"
#include "SimuladorBatalla.hpp"

using namespace std; 

int main(int argc, char** argv) {
	
	int opcion = 0; 
	while (opcion != 2){
		cout << "1) Simulador de batalla. " <<endl; 
		cout << "2) Salir. " <<endl;
		cin >> opcion; 
		switch (opcion){
			case 1: 
				{
				cout << " SIMULADOR DE BATALLA: " <<endl; 
				cout << "Ingrese el nombre de su Nokemon: " <<endl; 
				string n = ""; 
				cin >> n; 
				int opcion2 = 0; 
				while (opcion2 != 4){
					cout << "1) Tipo fuego." <<endl; 
					cout << "2) Tipo hielo. " <<endl; 
					cout << "3) Tipo hierba. "	<<endl; 
					cin >> opcion2; 
					srand(time(NULL));
					int poder = 5 + (rand()% 5);
					int poder2 = 5 + (rand()% 5);
					int tipoal = 1 + (rand()% 2);
					Nokemon* nokke1; 
					Nokemon* nokke2; 
					switch (opcion2){
						case 1:
							{
							Nokemon* nokefuego = new AnafreMon(n, 39, 39, 52, 43, poder); 
							nokke1 = nokefuego; 
							break; 
							}
						case 2:
							{
							Nokemon* nokehielo = new CharamuscoMon(n, 45, 45, 49, 49, poder); 	
							nokke1 = nokehielo; 
							break; 
							}
						case 3: 
							{
							Nokemon* nokehierba = new AguacateMon(n, 44, 44, 48, 65, poder); 	
							nokke1 = nokehierba; 
							break; 
							}
					}//Fin del switch que valida el tipo. 
					if (tipoal == 1){
						Nokemon* nokefuego2 = new AnafreMon("AnafreMon GENERADO", 39, 39, 52, 43, poder2); 
						nokke2 = nokefuego2; 	
					}else if (tipoal == 2){
						Nokemon* nokehielo2 = new CharamuscoMon("CharamuscoMon GENERADO", 45, 45, 49, 49, poder2); 	
						nokke2 = nokehielo2;
					}else if (tipoal == 3){
						Nokemon* nokehierba2 = new AguacateMon("AguacateMon GENERADO", 44, 44, 48, 65, poder2); 
						nokke2 = nokehierba2; 
					}
					SimuladorBatalla* simu = new SimuladorBatalla(nokke1, nokke2);
					
					
				}
				break; 
				}//Fin del caso 1.
		}//Fin del switch que valida la opcion. 
	}//Fin del while que reinicia el programa. 
	return 0;
}