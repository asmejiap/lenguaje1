#include <iostream>
#include "calificaciones.h"
#include "promedio.h"
using namespace std;

void calificaciones() {
	system("cls");
	
	cout << "Pantalla de ingreso de calificaciones :)" << endl;
	cout << endl;
	cout << endl;
	
	bool salir = false;
	
	while(salir == false) {
		string opcion;
		float n1 =0 ,n2=0 ,n3=0;
		float total=0;
		cout<<"Ingrese las calificaciones para tres periodos"<<endl;
		cin	>>	n1;
		cin >>  n2;
		cin >>  n3;
		total=(n1+n2+n3)/3;
		if(total >=60)
		{
			cout<<"Aprobado"<<endl;
			cout<<total<<endl;
			
		}
		else
		{
			cout<<"Reprobado"<<endl;
			cout<<total<<endl;
		}
		cout << "presione 'S' mas enter para salir de esta pantalla de lo contrario cualquier letra para continuar" << endl;	
		cin >> opcion;
		
		if (opcion == "S" || opcion == "s") {
			salir = true;	
	
		}
	}
}
