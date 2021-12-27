#include <iostream>
#include <time.h>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *insert(Node *root, int data){
    if(root == NULL){
        root=new Node;
        root->left=NULL;
        root->right=NULL;
        root->data=data;
    }else if (data < root->data)
    {
        root->left = insert(root->left, data);
    }else if (data > root->data)
    {
        root->right = insert(root->right, data);
    }
    return root;
    
}

void inOrder(Node *root){
    if(root!=NULL)
    {
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}

void preOrder(Node *root){
    if (root!=NULL){
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}


main(){

    srand(time(0));
    
    Node *root = NULL;

    for (int i=0; i<20; i++)
    {
        int data = 10 + rand()%1000;
        root = insert(root, data);
    }
    cout<<endl;

    inOrder(root);

    cout<<"program end";


}