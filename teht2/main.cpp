#include <iostream>
#include "game.h"

using namespace std;

int main()
{
    int maxNumber;

    std::cout<<"anna maksimiluku"<<std::endl;
    std::cin>>maxNumber;
    Game peli(maxNumber);
    peli.play();
}
