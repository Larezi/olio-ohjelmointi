#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <string>

using namespace std;

class Chef
{
public:
    Chef(string);
    ~Chef();
    string getName();
    int makeSalad(int);
    int makeSoup(int);
protected:
    string chefName;

};



class ItalianChef : public Chef
{
public:
    ItalianChef(string);
    ~ItalianChef();
    bool askSecret(string,int,int);
private:
    int makepizza(int,int);
    int flour;
    int water;
    string password = "pizza";
};



#endif // ITALIANCHEF_H
