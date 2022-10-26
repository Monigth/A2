#include<iostream>
using namespace std;

int main () {
    float CLAM_x,CLAM_s=0.0;
    int CLAM_i=0, CLAM_l;
    cout<<"Ingrese el valor de NMAT_l: ";
    cin>>CLAM_l;
    do{
        cout<<"Ingrese el valor de NMAT_x: ";
        cin>>CLAM_x;
        CLAM_i=CLAM_i+1;
        CLAM_s=CLAM_s+CLAM_x;
    }while(CLAM_i<CLAM_l);

    cout <<"La suma de los numeros fue: "<<CLAM_s<<endl;
    return 0;

}