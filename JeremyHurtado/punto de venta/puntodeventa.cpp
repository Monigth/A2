
#include <iostream>
using namespace std;
int main()
{
    float JJHG_x, JJHG_s = 0, JJHG_vb, JJHG_piva = 12, JJHG_viva, JJHG_pdesc = 10, JJHG_vdesc, JJHG_vn;
    int JJHG_i = 0, JJHG_l;
    cout << "Ingrese l: ";
    cin >> JJHG_l;
    do
    {
        cout << "Ingrese x: ";
        cin >> JJHG_x;
        JJHG_i = JJHG_i + 1;
        JJHG_s = JJHG_s + JJHG_x;
    } while (JJHG_i < JJHG_l);
    JJHG_vb = JJHG_s;
    JJHG_viva = JJHG_vb * JJHG_piva / 100;
    JJHG_vdesc = JJHG_vb * JJHG_pdesc / 100;
    JJHG_vn = JJHG_vb + JJHG_viva - JJHG_vdesc;
    cout << "El valor a pagar es de: " << JJHG_vn << endl;
    return 0;
}