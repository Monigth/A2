#include <iostream>
using namespace std;
int main()
{
    int JJHG_aa, JJHG_ma, JJHG_da, JJHG_an, JJHG_mn, JJHG_dn, JJHG_a, JJHG_m, JJHG_d;
    cout << "Ingrese la fecha actual Año-Mes-Dia :";
    cin >> JJHG_aa >> JJHG_ma >> JJHG_da;
    cout << "Ingrese la fecha de nacimiento Año-Mes-Dia : ";
    cin >> JJHG_an >> JJHG_mn >> JJHG_dn;

    if (JJHG_da > JJHG_dn)
    {

        JJHG_d = JJHG_da - JJHG_dn;
    }
    else
    {
        JJHG_da = JJHG_da + 30;
        JJHG_ma = JJHG_ma - 1;
        JJHG_d = JJHG_da - JJHG_dn;
    }

    if (JJHG_ma > JJHG_mn)
    {

        JJHG_m = JJHG_ma - JJHG_mn;
    }
    else
    {

        JJHG_ma = JJHG_ma + 12;
        JJHG_aa = JJHG_aa - 1;
        JJHG_m = JJHG_ma - JJHG_mn;
    }
    JJHG_a = JJHG_aa - JJHG_an;

    cout << "Usted tiene " << JJHG_a << " años, " << JJHG_m << " meses," << JJHG_d << " dias" << endl;
    return 0;
}