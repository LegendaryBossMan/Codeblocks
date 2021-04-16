#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Human
{
    private:
    int hp1= 3;// human hp
    int attack1;//human attack holder
    public:
   void getAttack1(int);
    void takeDamage1(int, int, int);

};
void Human::getAttack1 (int attack1)
{
     for(int i = 0; i < 11; i++)
    {
        attack1 = (rand()%10)+1; // generates number 1 - 10
        cout << attack1 << endl;
    }
}

void Human::takeDamage1(int attack, int attack1, int hp1)
{
    if(attack == 5)
    {
        cout<<"You take a point of damage"<<endl;
        hp1--;
    }
    else
    {
        cout<<"You take no damage."<<endl;
    }
}


int main()
{

    return 0;
}
