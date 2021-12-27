#include <stdio.h>
#include <iostream>

using namespace std;

struct Person
{
    string name;
    string age;
    string zodac;
};

main()
{
    Person person[4];

    for (int i=0; i<4; i++)
    {
        cout<<"--------------------------"<<endl;
        cout<<"Please input person "<<i+1<<" name: ";
        cin>>person[i].name;
        cout<<"Please input person "<<i+1<<" age: ";
        cin>>person[i].age;
        cout<<"Please input person "<<i+1<<" zodac: ";
        cin>>person[i].zodac;
        cout<<"--------------------------"<<endl;
    }

    cout<<"--------------------------"<<endl;
    for (int i=0; i<4; i++)
    {
        cout<<"Person "<<i+1<<" : "<<person[i].name<<", "<<person[i].age<<", "<<person[i].zodac<<endl;
    }
    cout<<"--------------------------"<<endl;

}