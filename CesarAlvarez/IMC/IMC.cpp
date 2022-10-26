#include <iostream>
using namespace std;
int main () 
{
	float CLAM_imc,CLAM_peso,CLAM_altura;
	cout<<"Ingrese el peso (kg): ";cin>>CLAM_peso;
	cout<<"Ingrese la altura (metros): ";cin>>CLAM_altura;
	CLAM_imc=CLAM_peso/(CLAM_altura*CLAM_altura);
	if(CLAM_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(CLAM_imc>=18.5 && CLAM_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(CLAM_imc>=25 && CLAM_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(CLAM_imc>=27 && CLAM_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(CLAM_imc>=30 && CLAM_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(CLAM_imc>=35 && CLAM_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(CLAM_imc>=40 && CLAM_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(CLAM_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}