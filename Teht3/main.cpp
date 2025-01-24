#include <iostream>
#include "italianchef.h"

using namespace std;

int main()
{
    cout << "Luodaan Chef-olio." << endl;
    Chef chef1("PerusChef");
    cout << "Chef nimi: " << chef1.getName() << endl;
    cout << "Testataan makeSalad:" << endl;
    chef1.makeSalad(20);
    chef1.makeSalad(3);
    cout << "Testataan makeSoup:" << endl;
    chef1.makeSoup(15);
    chef1.makeSoup(2);

    //ItalianChef-olion luonti ja funktioiden kokeilu
    cout << "Luodaan ItalianChef-olio." << endl;
    ItalianChef italianChef("Mario");
    cout << "ItalianChef nimi: " << italianChef.getName() << endl;

    cout << "Testataan askSecret oikealla salasanalla:" << endl;
    italianChef.askSecret("pizza", 25, 20);

    cout << "Testataan askSecret väärällä salasanalla:" << endl;
    italianChef.askSecret("wrongpassword", 15, 15);

    cout << "Testaus valmis." << endl;
    return 0;
}
