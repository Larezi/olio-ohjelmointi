#include "game.h"
#include <iostream>

Game::Game(int)
{
    numOfGuesses=0;
    playerGuess=0;
    srand(time(0));
    randomNumber = rand() % maxNumber + 1;
}

Game::~Game()
{

}

void Game::play()
{

    while(playerGuess!=randomNumber)
    {
        std::cout << "Arvaa Luku" << std::endl;
        std::cin >> playerGuess;
        numOfGuesses++;
        if(playerGuess<randomNumber)
        {
            std::cout << "Lukusi on pienempi" << std::endl;
        }
        if(playerGuess>randomNumber)
        {
            std::cout << "lukusi on suurempi" << std::endl;
        }
    }
    printGameResult();
}

void Game::printGameResult()
{
    std::cout << "Oikea vastaus oli: " << randomNumber << std::endl;
    std::cout << "Arvauksia tarvittiin: " << numOfGuesses << std::endl;
}
