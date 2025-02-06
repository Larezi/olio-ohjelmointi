#include "notifikaattori.h"

Notifikaattori::Notifikaattori() {
    seuraajat = nullptr;
}

Notifikaattori::~Notifikaattori()
{

}


void Notifikaattori::lisaa(Seuraaja *a)
{
    a->next = seuraajat;
    seuraajat = a;
}

void Notifikaattori::poista(Seuraaja *a)
{
    if (seuraajat == nullptr || a == nullptr) return;

    if (seuraajat == a) {
        seuraajat = seuraajat->next;
        return;
    }

    Seuraaja* temp = seuraajat;
    while (temp->next != nullptr && temp->next != a) {
        temp = temp->next;
    }

    if (temp->next == a) {
        temp->next = a->next;
    }
}

void Notifikaattori::tulosta()
{
    cout<<"Notifikaattorin seuraajat"<<endl;
    Seuraaja* temp = seuraajat;
    while(temp != nullptr){
        cout<<"Seuraaja: "<< temp->getnimi()<<endl;
        temp = temp->next;
    }
}

void Notifikaattori::postita(string viesti)
{
    Seuraaja* temp = seuraajat;
    while (temp != nullptr) {
        temp->paivitys(viesti);
        temp = temp->next;
    }
}
