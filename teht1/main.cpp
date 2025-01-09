#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int sluku = rand() % 20 + 1;
    int kayttaja;
    while(kayttaja != sluku)
    {
        cout << "Arvaa Luku" << endl;
        cin >> kayttaja;
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

    return 0;
}
