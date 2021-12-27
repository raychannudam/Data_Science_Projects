#include <iostream>
#include <time.h>
#include <stdio.h>
using namespace std;
main()
{
    srand(time(0));
    int num[80];
    for (int i=0; i<80; i++)
    {
        int randome = rand()%1000 + 10;
        num[i] = randome;
    }
    for (int i=0; i<80; i++)
    {
        cout<<num[i]<<endl;
    }
}