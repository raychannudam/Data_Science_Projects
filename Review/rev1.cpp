#include <iostream>
struct Student
{
    int idNumber;
    float score;
    char gender;
};
using namespace std;

int main()
{
    int n;
    int result;
    int output = 0;
    int resultDevide;
    cin>>n;
    resultDevide = n;
    for (int i=10; i<1000000; i*=10)
    {
        result = resultDevide % 10;
        resultDevide = n / i;
        if (result > 0)
        {
            output = output + result;
            break;
        }
    }

    output = output + n;

    cout<<output;


    return 0;
}