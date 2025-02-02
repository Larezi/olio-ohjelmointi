#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H

#include "pankkitili.h"

class Luottotili : public Pankkitili {
private:
    double luottoRaja;

public:
    Luottotili(std::string nimi, double luottoraja);
    bool withdraw(double a);
    bool deposit(double a);
    void showSaldo();
};

#endif

