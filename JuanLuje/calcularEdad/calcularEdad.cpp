#include <iostream>
using namespace std;
int main()
{
    int JMLM_aa, JMLM_ma, JMLM_da, JMLM_an, JMLM_mn, JMLM_dn, JMLM_a, JMLM_m, JMLM_d;
    cout << "Ingrese la fecha actual Año-Mes-Dia :";
    cin >> JMLM_aa >> JMLM_ma >> JMLM_da;
    cout << "Ingrese la fecha de nacimiento Año-Mes-Dia : ";
    cin >> JMLM_an >> JMLM_mn >> JMLM_dn;

    if (JMLM_da > JMLM_dn)
    {

        JMLM_d = JMLM_da - JMLM_dn;
    }
    else
    {
        JMLM_da = JMLM_da + 30;
        JMLM_ma = JMLM_ma - 1;
        JMLM_d = JMLM_da - JMLM_dn;
    }

    if (JMLM_ma > JMLM_mn)
    {

        JMLM_m = JMLM_ma - JMLM_mn;
    }
    else
    {

        JMLM_ma = JMLM_ma + 12;
        JMLM_aa = JMLM_aa - 1;
        JMLM_m = JMLM_ma - JMLM_mn;
    }
    JMLM_a = JMLM_aa - JMLM_an;

    cout << "Usted tiene " << JMLM_a << " años, " << JMLM_m << " meses," << JMLM_d << " dias" << endl;
    return 0;
}