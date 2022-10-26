#include <iostream>
using namespace std;
int main()
{
    int CLAM_aa, CLAM_ma, CLAM_da, CLAM_an, CLAM_mn, CLAM_dn, CLAM_a, CLAM_m, CLAM_d;
    cout << "Ingrese la fecha actual Año-Mes-Dia :";
    cin >> CLAM_aa >> CLAM_ma >> CLAM_da;
    cout << "Ingrese la fecha de nacimiento Año-Mes-Dia : ";
    cin >> CLAM_an >> CLAM_mn >> CLAM_dn;

    if (CLAM_da > CLAM_dn)
    {

        CLAM_d = CLAM_da - CLAM_dn;
    }
    else
    {
        CLAM_da = CLAM_da + 30;
        CLAM_ma = CLAM_ma - 1;
        CLAM_d = CLAM_da - CLAM_dn;
    }

    if (CLAM_ma > CLAM_mn)
    {

        CLAM_m = CLAM_ma - CLAM_mn;
    }
    else
    {

        CLAM_ma = CLAM_ma + 12;
        CLAM_aa = CLAM_aa - 1;
        CLAM_m = CLAM_ma - CLAM_mn;
    }
    CLAM_a = CLAM_aa - CLAM_an;

    cout << "Usted tiene " << CLAM_a << " años, " << CLAM_m << " meses," << CLAM_d << " dias" << endl;
    return 0;
}