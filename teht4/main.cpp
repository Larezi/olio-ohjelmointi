#include <iostream>
#include <asiakas.h>

using namespace std;

int main()
{
    Asiakas asiakas1("Katti Matikainen", 1000);


    asiakas1.showSaldo();


    asiakas1.talletus(500.00);
    asiakas1.showSaldo();

    asiakas1.luotonNosto(20);
    Asiakas asiakas2("Matti Matikainen", 1000);
    asiakas1.tiliSiirto(50, asiakas2);
    asiakas2.showSaldo();
    return 0;
}
