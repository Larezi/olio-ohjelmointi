#ifndef SEURAAJA_H
#define SEURAAJA_H
#include <string>
#include <iostream>
using namespace std;

class Seuraaja
{
public:
    Seuraaja(string);
    Seuraaja* next = nullptr;
    string getnimi();
    void paivitys(string);
private:
    string nimi;
};

#endif // SEURAAJA_H
