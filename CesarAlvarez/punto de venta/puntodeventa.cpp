
#include <iostream>
using namespace std;
int main()
{
    float CLAM_x, CLAM_s = 0, CLAM_vb, CLAM_piva = 12, CLAM_viva, CLAM_pdesc = 10, CLAM_vdesc, CLAM_vn;
    int CLAM_i = 0, CLAM_l;
    cout << "Ingrese l: ";
    cin >> CLAM_l;
    do
    {
        cout << "Ingrese x: ";
        cin >> CLAM_x;
        CLAM_i = CLAM_i + 1;
        CLAM_s = CLAM_s + CLAM_x;
    } while (CLAM_i < CLAM_l);
    CLAM_vb = CLAM_s;
    CLAM_viva = CLAM_vb * CLAM_piva / 100;
    CLAM_vdesc = CLAM_vb * CLAM_pdesc / 100;
    CLAM_vn = CLAM_vb + CLAM_viva - CLAM_vdesc;
    cout << "El valor a pagar es de: " << CLAM_vn << endl;
    return 0;
}