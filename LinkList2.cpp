#include <iostream>

using namespace std;

struct Element
{
    int data;
    Element *next;
};

struct List
{
    int n; //number of elements
    Element *head;
    Element *tail;
};

List* createList(){
    List *ls;
    ls = new List();
    ls->n=0;
    ls->head=NULL;
    ls->tail=NULL;
    return ls;
}

void insert_begin(List *ls, int newData) {
    //Create Element
    Element *e;
    e = new Element();
    e->data = newData;
    //Update pointer, head, tail
    e->next = ls->head;
    ls->head = e;
    if (ls->n == 0){
        ls->tail = e;
    }
    ls->n = ls->n + 1;
}

void insert_end(List *ls, int newData){
    if(ls->n == 0){
        insert_begin(ls, newData);
    }else{
        Element *e;
        e = new Element();
        e->data = newData;
        e->next = NULL;

        ls->tail->next = e;
        ls->tail = e;
        ls->n = ls->n + 1;
    }
}

void displayList(List *ls){
    Element *temp;
    temp - ls->head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void search(List *ls, int x) {
   Element *tmp;
   tmp=ls->head;
   int counter = 0;
   while (tmp!=NULL) {
       if (tmp->data == x) {
           counter = counter + 1;
       }
       tmp=tmp->next;
    }
   if (counter==0) {
       cout<<"No data found\n";
    }else{
       cout<<"Found data "<<counter<<" times\n";
    }
}

void delete_be (List *ls) {
      //1) Get reference to head of list
    Element *tmp;
    tmp = ls->head;
      //2) Make next element become head
    ls->head = ls->head->next;
      //3) Delete imn (old head)
    delete tmp;
     //4) Update tail if necessary
    if (ls->n == 1) {
        ls->tail = NULL;
    }
    ls->n = ls->n - 1;
}

void delete_last (List *ls){
    Element *tmp;
    if(ls->n == 1) {
        delete_be (ls);
    }else{
        tmp = ls->head;
        for (int i=1; i<=ls->n - 2; i++) {
            tmp = tmp->next;
        }
        ls->tail = tmp;

        tmp = tmp->next;
        ls->tail->next = NULL;
        delete tmp;
        ls->n = ls->n - 1;
    }
}

void destroy_list(List *ls){
    while (ls->n > 0)
    {
        delete_be(ls);
    }
}

main(){

List *L;
L = createList();

// insert_begin(L, 1);
// insert_begin(L, 2);
// insert_begin(L, 3);

insert_end(L, 4);
insert_end(L, 5);
insert_end(L, 6);

displayList(L);


}