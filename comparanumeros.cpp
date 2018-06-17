#include <iostream>
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char* argv[]) 
{
	int a,b,c;
	cout <<"Ingrese valores a comprar \n";
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = atoi(argv[3]);

	if(a> c && b>c && a==b)
	cout<<"A y B son mayores que C";
	else
	if(a> b && c>b && a==c)
	cout<<"A y C son mayores que B";	
	else
	if(b> a && c>a && b==c)
	cout<<"B y C son mayores que A";		
	else
	if(a==b && a==c && b==a && b==c && c==a && c==b)
	cout<<"A , B y C son iguales";
	
	if(a>b && a>c)
	{
	cout<<"El mayor es a:"<<a<<endl;		
	}
	else			
	if(b>a && b>c)
	{
	cout<<"El mayor es b:"<<b<<endl;		
	}
	if(c>a && c>b)
	{
	cout<<"El mayor es c:"<<c<<endl;		
	}
	
		


	return 0;
}

