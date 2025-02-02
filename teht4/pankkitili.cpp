#include "pankkitili.h"

Pankkitili::Pankkitili(string name) : omistaja(name), saldo(0) {
    cout << "Pankkitili luotu: " << omistaja << endl;
}

double Pankkitili::getBalance() {
    return saldo;
}

string Pankkitili::getOmistaja() {
    return omistaja;
}

bool Pankkitili::deposit(double a) {
    if (a > 0) {
        saldo += a;
        return true;
    }
    return false;
}

bool Pankkitili::withdraw(double a) {
    if (a > 0 && saldo - a >= 0) {
        saldo -= a;
        return true;
    }
    return false;
}
