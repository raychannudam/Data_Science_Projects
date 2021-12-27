#include <iostream>
#include <fstream>
using namespace std;

struct Student
{
    string id, firstName, lastName, gender, phoneNumber;
};

struct Node
{
    Student data;
    Node *left;
    Node *right;
};

Node *insert(Node *root, Student data)
{
    if (root == NULL)
    {
        root = new Node;
        root->left = NULL;
        root->right = NULL;
        root->data = data;
    }
    else if (data.id < root->data.id)
    {
        root->left = insert(root->left, data);
    }
    else if (data.id > root->data.id)
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
        cout << root->data.id<< " "<< root->data.firstName <<", ";
        inOrder(root->right);
    }
}

Student searchStudent(Node* root, string id){
    Student student;
    if (root==NULL) return student;
    else if (id == root->data.id) return root->data;
    else if (id>root->data.id) return searchStudent(root->right, id);
    else if (id<root->data.id) return searchStudent(root->left, id);
}

main(){

    fstream file;
    Node *root=NULL;
    Student student;
    string id;
    file.open("StudentList.txt", ios::in);
    while (!file.eof())
    {
        Student student;
        file>>student.id>>student.firstName>>student.lastName>>student.gender>>student.phoneNumber;
        root = insert(root, student);
    }
    cout<<"Please enter student id to search: ";
    cin>>id;
    student = searchStudent(root, id);
    cout<<student.id<<" "<<student.firstName<<" "<<student.lastName<<" "<<student.gender<<" "<<student.phoneNumber<<endl;
    
}