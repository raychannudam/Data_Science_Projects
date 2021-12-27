#include <iostream>

using namespace std;
main()
{
    int num[2000];
    for (int i=0; i<2000; i++)
    {
        num[i] = i+1;
    }
    for (int i=0; i<2000; i++)
    {
        cout<<num[i]<<endl;
    }
}