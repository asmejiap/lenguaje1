#include <iostream>
#include "menu.h"
#include "calificaciones.h"
#include "promedio.h"
using namespace std;

void menu() {	
	bool salir = false;
	
	while(salir == false) {
		int opcion;
		
		cout << "MENU PRINCIPAL" << endl;
		cout << "--------------" << endl;
		cout << endl;
		cout << "1 - Ingreso de calificaciones del periodo" << endl;
		cout << "2 - Mostrar promedio de calificaciones del periodo" << endl;
		cout << "3 - Calificaciones promedio por carrera" << endl;
		cout << "4 - Salir" << endl;
		
		cout << endl;
		cout << endl;				
		cout << "Ingrese un numero del menu y presione enter --> ";
		cin >> opcion;
		
		switch(opcion) {
			case 1:
				calificaciones();
				break;	
			case 2:
				promedio();
				break;	
			case 4:
				salir = true;	
			default: 		
				break;
		}
		
		 system("CLS");		
	}
}

