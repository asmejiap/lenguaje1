#include <iostream>
#include "seguridad.h"
#include "pantalla_inicio.h"
using namespace std;

bool login() {
	string password;
	bool acceso = false;
	int intentos = 0;
	
	while (acceso == false) {
		system("cls");		
		pantalla_inicio();
		
		if (intentos == 3) {
			cout << "No se ha podido validar su contraseña, por favor contacte al administrador del sistema." << endl;
			
			return false;
		}
	
		cout << "Ingrese sus credenciales de acceso: ";
		cin >> password;
		
		if (password == "sandman") {
			acceso = true;
		}				
		
		intentos++;		
	}
	
	system("cls");
	
	return true;
}

