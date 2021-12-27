#include <iostream>

using namespace std;

struct Student
{
    int id;
    string name;
    string gender;
    string dob;
};

main()
{
    Student std[5];
    char letter;
    for (int i=0; i<5; i++)
    {
        cin>>std[i].id;
        cin>>std[i].name;
        cin>>std[i].gender;
        cin>>std[i].dob;

    }

    int sortedID[5] = {1, 2, 3, 4, 5};

}
