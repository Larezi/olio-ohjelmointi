#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum);

int main()
{
    int maxnum = 0;
    cout << "Anna maksimiluku: " << endl;
    cin >> maxnum;
    int arvaukset = game(maxnum);
    cout << "Arvauksien maara: " << arvaukset << endl;
    return 0;
}



    int game(int maxnum)
    {
    srand(time(0));
    int kayttaja = 0;
    int arvaukset = 0;
    int sluku = rand() % maxnum + 1;
    while(kayttaja != sluku)
    {
        cout << "Arvaa Luku" << endl;
        cin >> kayttaja;
        arvaukset++;
        if(kayttaja < sluku)
        {
            cout << "Lukusi on pienempi" << endl;
        }
        if(kayttaja > sluku)
        {
            cout << "lukusi on suurempi" << endl;
        }
    }
    cout << "OIKEIN" << endl;
    return arvaukset;
    }
