#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
main()
{
    int value;
    int result = 0;
    while (true)
    {
        cout<<"Please input value: ";
        cin>>value;
        result = result + value;
        if (value == -1)
        {
            cout<<result;
            break;
        }
        
    }
}