#include "luottotili.h"
#include <iostream>

using namespace std;

Luottotili::Luottotili(string nimi, double luottoraja)
    : Pankkitili(nimi), luottoRaja(luottoraja) {
    cout << "Luottotili luotu: " << getOmistaja() << ", luottoraja: " << luottoRaja << endl;
}

bool Luottotili::withdraw(double a) {
    if (a > 0 && (getBalance() - a) >= -luottoRaja) {
        return Pankkitili::withdraw(a);
    }
    return false;
}

bool Luottotili::deposit(double a) {
    return Pankkitili::deposit(a);
}

void Luottotili::showSaldo() {
    cout << "Luottotilin saldo: " << getBalance() << " (luottoraja: -" << luottoRaja << ")" << endl;
}


