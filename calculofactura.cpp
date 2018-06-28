#include <iostream>
using namespace std;
 
int main(int argc, char** argv){
	
float subtotal,descuento,tdescuento,tsubtotal,tisv,total;
int exenta;

cout<<"Ingrese el subtotal"<<endl;
cin>>subtotal;
cout<<"Ingrese el descuento"<<endl;
cin>>descuento;
cout<<"Es exenta: 1= si & 0= no"<<endl;
cin>>exenta;


tdescuento=(subtotal*descuento)/100;
tsubtotal=(subtotal-tdescuento);

if(exenta==1)
{
	tisv=0;
}
else
{
	tisv=(tsubtotal*0.15);
}
total=(tsubtotal+tisv);
cout<<"El total a pagar"<<endl<<total<<endl;

}


