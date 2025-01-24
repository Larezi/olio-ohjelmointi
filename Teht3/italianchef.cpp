#include "italianchef.h"
#include <iostream>

Chef::Chef(string name) : chefName(name) {
    cout<<"Chef konstruktori"<<endl;
}

Chef::~Chef()
{

}

string Chef::getName()
{
    string name = chefName;
    return name;
}

int Chef::makeSalad(int s)
{
    int annos = s / 5;
    cout<<"Annoksia valmistettu: "<<annos<<endl;
    return annos;
}

int Chef::makeSoup(int s)
{
    int annos = s/3;
    cout<<"Annoksia valmistettu: "<<annos<<endl;
    return annos;
}


ItalianChef::ItalianChef(string name) : Chef(name)
{
    cout<<"ItalianChef konstruktori"<<endl;

}

ItalianChef::~ItalianChef()
{

}

bool ItalianChef::askSecret(string s, int a, int b)
{
    if(s == "pizza"){
        makepizza(a,b);
        return true;
    }
    else{
        cout<<"väärä salasana"<<endl;
        return false;
    }
}

int ItalianChef::makepizza(int jauho, int vesi)
{
    int pizzajauho = jauho / 5;
    int pizzavesi = vesi / 5;
    cout<<"Pizzoja tehty: "<<min(pizzajauho,pizzavesi)<<endl;
    return min(pizzajauho,pizzavesi);
}


