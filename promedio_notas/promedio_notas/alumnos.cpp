#include <iostream>
#include "alumnos.h"

using namespace std;
	
string arregloClientes[5][3] = {
	{ "U0351", "Angel Mejia", "2012-200-6068"},
	{ "U0352", "Michel Villanueva", "2012-200-6068"},
	{ "U0353", "Mario Cuellar", "2012-200-6068" },
	{ "U0354", "Alina Mejia", "2012-200-6068" },
	{ "U0355", "Miriam Mejia", "2012-200-6068" }
};


void alumnos() {
	system("cls");

	cout << "Lista de Alumnos" << endl;
	cout << "-------------------" << endl;
		
	for(int indice = 0; indice < 5; indice++) {
		cout << arregloClientes[indice][0] << " - " << arregloClientes[indice][1] << " - " << arregloClientes[indice][2]<< endl;;
	}

	cout << endl;
	cout << endl;
	
	bool salir = false;
	
	while(salir == false) {
		string opcion;
		cout << "presione 'S' y luego enter para salir de esta pantalla" << endl;	
		cin >> opcion;
		
		if (opcion == "S" || opcion == "s") {
			salir = true;
		}
	}
}
