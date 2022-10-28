#include <iostream>
using namespace std;
int main () 
{
	float JJHG_imc,JJHG_peso,JJHG_altura;
	cout<<"Ingrese el peso (kg): ";cin>>JJHG_peso;
	cout<<"Ingrese la altura (metros): ";cin>>JJHG_altura;
	JJHG_imc=JJHG_peso/(JJHG_altura*JJHG_altura);
	if(JJHG_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(JJHG_imc>=18.5 && JJHG_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(JJHG_imc>=25 && JJHG_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(JJHG_imc>=27 && JJHG_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(JJHG_imc>=30 && JJHG_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(JJHG_imc>=35 && JJHG_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(JJHG_imc>=40 && JJHG_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(JJHG_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}