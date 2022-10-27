#include <iostream>
using namespace std;
int main () 
{
	float JMLM_imc,JMLM_peso,JMLM_altura;
	cout<<"Ingrese el peso (kg): ";cin>>JMLM_peso;
	cout<<"Ingrese la altura (metros): ";cin>>JMLM_altura;
	JMLM_imc=JMLM_peso/(JMLM_altura*JMLM_altura);
	if(JMLM_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(JMLM_imc>=18.5 && JMLM_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(JMLM_imc>=25 && JMLM_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(JMLM_imc>=27 && JMLM_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(JMLM_imc>=30 && JMLM_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(JMLM_imc>=35 && JMLM_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(JMLM_imc>=40 && JMLM_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(JMLM_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}