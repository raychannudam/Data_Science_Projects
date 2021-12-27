#include <iostream>
#include <stdio.h>
#include <math.h>

float x1, x2, a, b, c;
using namespace std;

main()
{

    cout<<"Please input a: ";
    cin>>a;
    cout<<"Please input b: ";
    cin>>b;
    cout<<"Please input c: ";
    cin>>c;

    //find delta
    float delta = pow(b, 2) - (4*a*c);

    //find x1, x2
    if (delta > 0)
    {
        x1 = (-(b) + sqrt(delta) ) / (2 *a);
        x2 = (-(b) - sqrt(delta) ) / (2 *a);
        cout<<x1<<","<<x2;
    }
    else if (delta < 0)
    {
        cout<<"delta < 0";

    }
    else
    {
        x1 = -(b) / (2*a);
        x2 = x1;
        cout<<x1<<","<<x2;
    }


}