#include<iostream>
using namespace std;

int main () {
    float JJHG_x,JJHG_s=0.0;
    int JJHG_i=0, JJHG_l;
    cout<<"Ingrese el valor de JJHG_l: ";
    cin>>JJHG_l;
    do{
        cout<<"Ingrese el valor de JJHG_x: ";
        cin>>JJHG_x;
        JJHG_i=JJHG_i+1;
        JJHG_s=JJHG_s+JJHG_x;
    }while(JJHG_i<JJHG_l);

    cout <<"La suma de los numeros fue: "<<JJHG_s<<endl;
    return 0;

}