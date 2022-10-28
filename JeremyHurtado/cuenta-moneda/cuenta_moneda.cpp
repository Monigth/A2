#include <iostream>
using namespace std;
int main ()
{
	float JJHG_x,JJHG_s=0,JJHG_s1=0,JJHG_s5=0;
	int JJHG_i=0,JJHG_l,JJHG_i1=0,JJHG_i5=0;
	cout<<"Ingrese l: ";cin>>JJHG_l;
	do{

	cout<<"Ingrese x: ";cin>>JJHG_x;
	JJHG_i=JJHG_i+1;
	JJHG_s=JJHG_s+JJHG_x;
	if(JJHG_x==1){
		JJHG_i1=JJHG_i1+1;
		JJHG_s1=JJHG_s1+JJHG_x;
	}else{

		JJHG_i5=JJHG_i5+1;
		JJHG_s5=JJHG_s5+JJHG_x;
	}

	}while(JJHG_i<JJHG_l);
	cout<<"La cantidad de monedas es: "<<JJHG_i<<endl;
	cout<<"El valor es: "<<JJHG_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<JJHG_i1<<endl;
	cout<<"El valor es: "<<JJHG_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<JJHG_i5<<endl;
	cout<<"La cantidad de moneda es: "<<JJHG_s5<<endl;
	return 0;
}