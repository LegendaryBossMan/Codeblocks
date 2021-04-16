#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

  class Alien
{
    private:
    int hp =3;// hp
    public:
    void getAttack(int);
    void takeDamage(int, int, int);
    };

void Alien:: getAttack (int attack)
{
    int a;
     for(a = 0; a < 3; a++)
        {
            cout <<"Press a button for the Aliens turn."<<endl;

     for(int i = 0; i < 11; i++)
    {
        attack = (rand()%10)+1; // generates number 1 - 10
        cout << attack << endl;
    }
        }
}

int main()
{
    return 0;
}
