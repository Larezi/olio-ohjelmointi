#include "asiakas.h"
#include <iostream>

using namespace std;

Asiakas::Asiakas(string nimi, double luottoraja)
    : nimi(nimi), kayttotili(nimi), luottotili(nimi, luottoraja) {
}

string Asiakas::getNimi() {
    return nimi;
}

void Asiakas::showSaldo() {
    cout << "Kayttotilin saldo: " << kayttotili.getBalance() << endl;
}

bool Asiakas::talletus(double summa) {
    return kayttotili.deposit(summa);
}

bool Asiakas::nosto(double summa) {
    return kayttotili.withdraw(summa);
}

bool Asiakas::luotonMaksu(double summa) {
    return luottotili.deposit(summa);
}

bool Asiakas::luotonNosto(double summa) {
    return luottotili.withdraw(summa);
}

bool Asiakas::tiliSiirto(double summa, Asiakas &vastaanottaja) {
    if (summa > 0 && kayttotili.withdraw(summa)) {
        vastaanottaja.kayttotili.deposit(summa);
        cout << "Siirretty " << summa << " euroa asiakkaalta " << nimi
             << " asiakkaalle " << vastaanottaja.getNimi() << endl;
        return true;
    }
    cout << "Siirto epäonnistui! Tarkista saldo." << endl;
    return false;
}

