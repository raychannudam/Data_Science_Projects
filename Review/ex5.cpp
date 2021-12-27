#include <stdio.h>
#include <iostream>

int sumSuit(int num)
{
    int result = 0;
    for (int i=1; i<=num; i++)
    {
        result = result + i;
    }
    return result;
}

int sumDigit(int num)
{
    int i = 10;
    int digits = 0;
    int result = 0;

    while (true)
    {
        if (num%i == num)
        {
            digits = i;
            break;
        }

        i*=10;
    }

    digits = digits / 10;

    for (int i=digits; i > 0 ; i = i / 10)
    {
        result = result + (num/i); 
        num = num % i;
    }
    return result;

}

int tempConvert (int temp, char option)
{
    int result;
    if (option == '1')
    {
        result = temp * (9/5) + 32;
        return result;
    }
    else if (option == '2')
    {
        result = (temp - 32) * (5/9);
        return result;
    }
}

using namespace std;
main()
{
    while (true)
    {
        char result;
        cout<<"1/Sumsuit 2/Sumdigit 3/ConvertTemp 4/exit"<<endl;
        cout<<"Please input option: ";
        cin>>result;
        if (result == '1')
        {
            int num;
            cout<<"Please input value: ";
            cin>>num;
            cout<<"Result: "<<sumSuit(num)<<endl;
        }
        else if (result == '2')
        {
            int num;
            cout<<"Please input value: ";
            cin>>num;
            cout<<"Result: "<<sumDigit(num)<<endl;
        }
        else if (result == '3')
        {
            int temp;
            char option;
            cout<<"1/CToF 2/FToC"<<endl;
            cout<<"Please input option: ";
            cin>>option;
            cout<<"Please input temp: ";
            cin>>temp;
            cout<<"Result: "<<tempConvert (temp, option)<<endl;
            
        }
        else if (result == '4')
        {
            cout<<"Thank you!";
            break;
        }
        else
        {
            cout<<"Error Plese try again!"<<endl;
        }
    }
}