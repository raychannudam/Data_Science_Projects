#include <iostream>

using namespace std;

class Node {
public:
    int Value;
    Node* next;
};

void printList(Node*n){
    while (n!=NULL)
    {
        cout<<n->Value<<endl;
        n=n->next;
    }
    
}

void insertAtTheFront(Node **head, int newValue){
    //1. Prepare a newNode
    Node * newNode = new Node();
    newNode->Value = newValue;
    //2. Put it in front of current head
    newNode->next = *head;
    //3. Move head of the list to point the newNode
    *head = newNode;
}

main(){

    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->Value = 1;
    head->next = second;
    second->Value = 2;
    second->next = third;
    third->Value = 3;
    third->next = NULL;

    insertAtTheFront(&head, -1);
    printList(head);



}