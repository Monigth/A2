#include <iostream>
using namespace std;
int main ()
{
	float CLAM_x,CLAM_s=0,CLAM_s1=0,CLAM_s5=0;
	int CLAM_i=0,CLAM_l,CLAM_i1=0,CLAM_i5=0;
	cout<<"Ingrese l: ";cin>>CLAM_l;
	do{

	cout<<"Ingrese x: ";cin>>CLAM_x;
	CLAM_i=CLAM_i+1;
	CLAM_s=CLAM_s+CLAM_x;
	if(CLAM_x==1){
		CLAM_i1=CLAM_i1+1;
		CLAM_s1=CLAM_s1+CLAM_x;
	}else{

		CLAM_i5=CLAM_i5+1;
		CLAM_s5=CLAM_s5+CLAM_x;
	}

	}while(CLAM_i<CLAM_l);
	cout<<"La cantidad de monedas es: "<<CLAM_i<<endl;
	cout<<"El valor es: "<<CLAM_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<CLAM_i1<<endl;
	cout<<"El valor es: "<<CLAM_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<CLAM_i5<<endl;
	cout<<"La cantidad de moneda es: "<<CLAM_s5<<endl;
	return 0;
}