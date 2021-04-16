#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void evenPrint(const int [], size_t);
void oddPrint(const in [], size_t);
void swapArrary( int [], int [], size_t);

size_t i;

int main()
{

    size_t i;
    int evenArray[10]= {0};
    int oddArray[10]= {0};

    for( i = 0; i <= SIZE; ++i)
    {
        evenArray[i] = i * 2 +2;
    }
    printf("%s", "Printing the even-integer array\n\n");
    printf("%s%17s\n", "Element", "Value");
    evenPrint(evenArray, SIZE);

    for(i = 0; i <= SIZE; ++i)
    {
        oddArray[i] = i * 3 + 3;
    }
    printf("%s", "Printing the odd-integer array\n\n");
    printf("%s%17s\n", "Element", "Value");
    oddPrint(oddArray, SIZE);

    swapArrary(evenArray,oddArray,SIZE);


    printf("%s", "Printing the even-integer array after swap\n\n");
    printf("%s%17s\n","Element", "Value");
    evenPrint(evenArray, SIZE);

    printf("%s", "Printing the odd-integer array after swap\n\n");
    printf("%s%17s\n", "Element", "Value");
    evenPrint(oddArray, SIZE);

    return 0;
}
 void evenPrint(const int e[], size_t size)
 {
     size_t i;
     for (i = 0; i < size; ++i)
     {
         printf("%7d%17d\n", i, e[i] );
     }
     puts("");
 }

 void oddPrint(const int o[], size_t size)
 {
     size_t i;
     for(i = 0; i < size; ++i)
     {
         printf("%7d%17d\n", i , o[i]);
     }
     puts("");
 }

 void swapArrary(int e[], int o[], size_t size)
 {
    size_t;

    for( i = 0; i < size; ++i)
    {
        e[i] = o[i];
        o[i] = 0;
    }
 }
