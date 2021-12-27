#include <stdio.h>
#include <iostream>

int sum(int num)
{
    int result = 0;
    for (int i=1; i<=num; i++)
    {
        result = result + i;
    }
    return result;
}

using namespace std;
main()
{
    int num;
    cout<<"Please enter a number: ";
    cin>>num;
    cout<<sum(num);
}