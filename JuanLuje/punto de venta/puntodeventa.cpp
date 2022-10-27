
#include <iostream>
using namespace std;
int main()
{
    float JMLM_x, JMLM_s = 0, JMLM_vb, JMLM_piva = 12, JMLM_viva, JMLM_pdesc = 10, JMLM_vdesc, JMLM_vn;
    int JMLM_i = 0, JMLM_l;
    cout << "Ingrese l: ";
    cin >> JMLM_l;
    do
    {
        cout << "Ingrese x: ";
        cin >> JMLM_x;
        JMLM_i = JMLM_i + 1;
        JMLM_s = JMLM_s + JMLM_x;
    } while (JMLM_i < JMLM_l);
    JMLM_vb = JMLM_s;
    JMLM_viva = JMLM_vb * JMLM_piva / 100;
    JMLM_vdesc = JMLM_vb * JMLM_pdesc / 100;
    JMLM_vn = JMLM_vb + JMLM_viva - JMLM_vdesc;
    cout << "El valor a pagar es de: " << JMLM_vn << endl;
    return 0;
}