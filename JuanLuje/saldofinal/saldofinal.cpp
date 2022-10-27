#include <iostream>
using namespace std;
int main ()
{
	float JMLM_x,JMLM_s=0;
	int JMLM_i=0,JMLM_l;
	cout<<"Ingrese numero de egresos  ";cin>>JMLM_l;
	cout<<"Ingrese numero saldo inicial : ";cin>>JMLM_s;
	
	do{
	cout<<"Ingrese numero egreso(x): ";cin>>JMLM_x;
	JMLM_i=JMLM_i+1;
	JMLM_s=JMLM_s-JMLM_x;

	}while(JMLM_i<JMLM_l);
	cout<<"El saldo final es: "<<JMLM_s<<endl;
	return 0;
}