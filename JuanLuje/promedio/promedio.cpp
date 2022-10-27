#include <iostream>
using namespace std;
int main ()
{
	float JMLM_x,JMLM_pm=0;
	int JMLM_i=0,JMLM_l;
	cout<<"Ingrese l: ";cin>>JMLM_l;
	do{
	
	cout<<"Ingrese x: ";cin>>JMLM_x;
	JMLM_i=JMLM_i+1;
	if(JMLM_x>JMLM_pm){
		JMLM_pm=JMLM_x;
	}
	
	}while(JMLM_i<JMLM_l);
	cout<<"El promedio maximo del curso es: "<<JMLM_pm<<endl;
	return 0;
}