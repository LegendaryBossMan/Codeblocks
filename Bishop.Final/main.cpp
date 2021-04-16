#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand((unsigned) time(0));
    int num[5];
    int lucky;
    int num2[5];
    int luck2;
    int a;
    int b;
    int mon = 0;

    for(a = 0; a < 5; a++)
    {
        num[a] = (rand()%64)+1;
        lucky = (rand()%64)+1;
        cout << "Your numbers are: " << num[a] << endl;

        cout << "Lucky number is: " << luck2 << endl;

    }




 for(b = 0; b < 5; b++)
    {
        cout << "enter a number: " << endl;
        cin >> num2[b];

        if(num2[b] > 65 && num2[b] < 1)
        {
            cout << "you have entered an incorrect number\n\n";
            cout << "enter a Lottery number: " << endl;
            cin >> luck2[b];
        }

        if(num[b] < 1)
        {
            cout << "you have entered an incorrect number\n\n";
            cout << "enter a Lottery number: " << endl;
            cin >> num2[b];
        }
    }


    cout << "enter a Power Ball Number: " << endl;
    cin >> luck2;

    if(luck2 > 65 && luck2 < 1)
        {
            cout << "you have entered an incorrect number\n"<<endl;
            cout << "enter a lucky number: " << endl;
            cin >> luck2;
        }


    for(a = 0; a < 5; a++)
{
    cout << "Lottery Numbers: " << num[a] << endl;
    cout << "your Numbers: " << num2[b] << endl;
}
    cout << "Power ball Number: " << lucky << endl;
    cout << "your Power ball Number: " << luck2 << endl;


    for(a = 0; x < 5; x++)
{
        for (b = 0; i < 5; i++)
        {
            if(num[a] == num2[b])
            {
                mon = mon++;
            }
            if(lucky == luck2)
        {
            mon = mon + 1;
        }
        }
}






if(mon == 6)
    {
        cout << "$1,000,000" << endl;
    }
else if(mon == 5)
    {
        cout << "$100" << endl;
    }
else  if(mon == 4)
    {
        cout << "$50" << endl;
    }
else if(mon == 3)
    {
        cout << "$20" << endl;
    }
else if(mon == 2)
    {
        cout << "$10" << endl;
    }
else if(mon == 1)
    {
        cout << "$1" << endl;
    }
else if(mon == 0)
    {
        cout << "you lose" << endl;
    }


num = 0;

    return 0;
}
