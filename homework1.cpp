#include <iostream>

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

void preOrder(Node *root){
    if (root!=NULL){
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(Node *root){
    if(root!=NULL)
    {
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}



main(){

    Node *root=NULL;
    int id;
    for (int i=0; i<12; i++)
    {
        cout<<"Input Id: "<<endl;
        cin>>id;
        root = insert(root, id);
    }

    inOrder(root);
    cout<<endl;
    preOrder(root);
    


}