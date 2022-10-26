#include <iostream>
using namespace std;
int main ()
{
	float CLAM_x,CLAM_pm=0;
	int CLAM_i=0,CLAM_l;
	cout<<"Ingrese l: ";cin>>CLAM_l;
	do{
	
	cout<<"Ingrese x: ";cin>>CLAM_x;
	CLAM_i=CLAM_i+1;
	if(CLAM_x>CLAM_pm){
		CLAM_pm=CLAM_x;
	}
	
	}while(CLAM_i<CLAM_l);
	cout<<"El promedio maximo del curso es: "<<CLAM_pm<<endl;
	return 0;
}