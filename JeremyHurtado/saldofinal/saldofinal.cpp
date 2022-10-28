#include <iostream>
using namespace std;
int main ()
{
	float JJHG_x,JJHG_s=0;
	int JJHG_i=0,JJHG_l;
	cout<<"Ingrese numero de egresos  ";cin>>JJHG_l;
	cout<<"Ingrese numero saldo inicial : ";cin>>JJHG_s;
	
	do{
	cout<<"Ingrese numero egreso(x): ";cin>>JJHG_x;
	JJHG_i=JJHG_i+1;
	JJHG_s=JJHG_s-JJHG_x;

	}while(JJHG_i<JJHG_l);
	cout<<"El saldo final es: "<<JJHG_s<<endl;
	return 0;
}