#include <iostream>
using namespace std;
int main ()
{
	float JMLM_x,JMLM_s=0,JMLM_s1=0,JMLM_s5=0;
	int JMLM_i=0,JMLM_l,JMLM_i1=0,JMLM_i5=0;
	cout<<"Ingrese l: ";cin>>JMLM_l;
	do{

	cout<<"Ingrese x: ";cin>>JMLM_x;
	JMLM_i=JMLM_i+1;
	JMLM_s=JMLM_s+JMLM_x;
	if(JMLM_x==1){
		JMLM_i1=JMLM_i1+1;
		JMLM_s1=JMLM_s1+JMLM_x;
	}else{

		JMLM_i5=JMLM_i5+1;
		JMLM_s5=JMLM_s5+JMLM_x;
	}

	}while(JMLM_i<JMLM_l);
	cout<<"La cantidad de monedas es: "<<JMLM_i<<endl;
	cout<<"El valor es: "<<JMLM_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<JMLM_i1<<endl;
	cout<<"El valor es: "<<JMLM_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<JMLM_i5<<endl;
	cout<<"La cantidad de moneda es: "<<JMLM_s5<<endl;
	return 0;
}