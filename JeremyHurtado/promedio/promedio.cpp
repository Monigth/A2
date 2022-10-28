#include <iostream>
using namespace std;
int main ()
{
	float JJHG_x,JJHG_pm=0;
	int JJHG_i=0,JJHG_l;
	cout<<"Ingrese l: ";cin>>JJHG_l;
	do{
	
	cout<<"Ingrese x: ";cin>>JJHG_x;
	JJHG_i=JJHG_i+1;
	if(JJHG_x>JJHG_pm){
		JJHG_pm=JJHG_x;
	}
	
	}while(JJHG_i<JJHG_l);
	cout<<"El promedio maximo del curso es: "<<JJHG_pm<<endl;
	return 0;
}