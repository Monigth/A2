#include<iostream>
using namespace std;
int main()
{

float x,s=0,s1=0,s5=0;
int i=0,l,i1=0,i5=0;
cout<<"Ingrese l :"; cin>>l;
do{

cout<<"Ingrese x :"; cin>>x;
i=i+1;
s=s+x;
if(x==1){

s1=s1+x;
}else{

i5=i5+1;
s5=s5+x;
}

}while(i<1);

cout<<"La cantidad de monedas fue: " <<i<<endl;
cout<<"El valor fue: " <<s<<endl;
cout<<"La cantidad de monedas $1 fue: " <<i1<<endl;
cout<<"El valor fue: " <<s1<<endl;
cout<<"La cantidad de monedas .50 fue: " <<i5<<endl;
cout<<"El valor fue: " <<s5<<endl;
return 0;
}
