#include "seuraaja.h"

Seuraaja::Seuraaja(string nimi) : nimi(nimi), next(nullptr) {}

string Seuraaja::getnimi()
{
    return nimi;
}

void Seuraaja::paivitys(string viesti)
{
    cout<<nimi <<" Sai viestin: "<<viesti<<endl;
}


