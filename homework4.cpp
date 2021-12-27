#include <iostream>
#include <fstream>
using namespace std;

struct People
{
    string name;
    int age;
};

struct Node
{
    People data;
    Node *left;
    Node *right;
};

Node *insert(Node *root, People data)
{
    if (root == NULL)
    {
        root = new Node;
        root->left = NULL;
        root->right = NULL;
        root->data = data;
    }
    else if (data.age < root->data.age)
    {
        root->left = insert(root->left, data);
    }
    else if (data.age > root->data.age)
    {
        root->right = insert(root->right, data);
    }
    return root;
}


void inOrder(Node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        cout << root->data.name<< " "<< root->data.age <<", ";
        inOrder(root->right);
    }
}

void searchMin(string filename, int n){
    fstream file;
    file.open(filename, ios::in);
    People people[n];
    int i=0;
    while (!file.eof())
    {
        file>>people[i].name>>people[i].age;
        i++;
    }
    file.close();

    People temp;
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (people[i].age > people[j].age)
            {
                temp = people[i];
                people[i] = people[j];
                people[j] = temp;
            }
        }
    }

    for (int i=0; i<n; i++){
        cout<<people[i].name<<" "<<people[i].age<<endl;
    }
}

void searchMax(string filename, int n){
    fstream file;
    file.open(filename, ios::in);
    People people[n];
    int i=0;
    while (!file.eof())
    {
        file>>people[i].name>>people[i].age;
        i++;
    }
    file.close();

    People temp;
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (people[i].age < people[j].age)
            {
                temp = people[i];
                people[i] = people[j];
                people[j] = temp;
            }
        }
    }

    for (int i=0; i<n; i++){
        cout<<people[i].name<<" "<<people[i].age<<endl;
    }
}


main(){
    Node *root = NULL;
    fstream file;
    file.open("PeopleList.txt", ios::out);
    file.clear();
    int n;
    cout<<"Input n:";
    cin>>n;
    for (int i=0; i<n; i++){
        People people;
        cout<<"Name: ";
        cin>>people.name;
        cout<<"Age: ";
        cin>>people.age;
        root = insert(root, people);
        file<<people.name<<" "<<people.age<<endl;
    }
    file.close();

    inOrder(root);
    cout<<endl;
    searchMin("PeopleList.txt", n);
    cout<<endl;
    searchMax("PeopleList.txt", n);

}