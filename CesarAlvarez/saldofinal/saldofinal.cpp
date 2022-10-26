#include <iostream>
using namespace std;
int main ()
{
	float CLAM_x,CLAM_s=0;
	int CLAM_i=0,CLAM_l;
	cout<<"Ingrese numero de egresos  ";cin>>CLAM_l;
	cout<<"Ingrese numero saldo inicial : ";cin>>CLAM_s;
	
	do{
	cout<<"Ingrese numero egreso(x): ";cin>>CLAM_x;
	CLAM_i=CLAM_i+1;
	CLAM_s=CLAM_s-CLAM_x;

	}while(CLAM_i<CLAM_l);
	cout<<"El saldo final es: "<<CLAM_s<<endl;
	return 0;
}