#include <stdio.h>
#include <stdlib.h>
#include <math.h>// needed for sqrt() and pow()
#include <time.h>
#define RSIZE 5 // can change in program if another number is needed.
#define CSIZE1 3

/*
Nazareth Bishop
10/31/2017
Final Exam- CIS126 program #1
Program inputs random numbers, calculates the numbers for the hypotenuse of a triangle
then displays the sides and hypotenuse in a mulit-demensional array*/
void popA();// protypes for populating array and printing it.
void printA();

   int sideA;
   int sideB;
   int hyp;
    int array[] = {0};
int main()
{

   popA();

   printA();
    return 0;
}
void printA(int p[][CSIZE1], size_t a_size, size_t b_size)
{
    size_t b;
    size_t a;
    size_t h;
    printf("%-9s%5s%5s\n", "Size A", "Side B", "Hypotenuse");

    for(a = 0; a < a_size; ++a)
    {
        for(b = 0; b < b_size; ++b)
        {
            p[a][b] =  3 + (rand() % 9);
        }
    }

return;
}
void popA(float p[] [CSIZE1], size_t  a_size, size_t b_size)
          {

            size_t b;
            size_t a;

            srand(time(NULL));
            for(a = 0; a < a_size; ++a)
            {
                for(b = 0; b< b_size; ++b)
                {
                  p[a][b]= 3 + (rand() % 19 );
                }
          }
          return;
          }
