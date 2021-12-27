#include <iostream>
#include <time.h>
#include <stdio.h>
using namespace std;

struct Element
{
    int data;
    Element *next;
};
struct List
{
    int n;
    Element *head;
    Element *tail;
};

List* createList()
{
    List *ls;
    ls = new List();
    ls->n = 0;
    ls->head = NULL;
    ls->tail = NULL;
    return ls;
}

void insert_Begin(List*ls, int newData)
{
    Element *e;
    e = new Element();
    e->data = newData;
    e->next = ls->head;
    ls->head = e;
    if (ls->n == 0)
    {
        ls->tail = e;
    }
    ls->n = ls->n+1;
}

void displayList(List *ls)
{
    Element *tmp;
    tmp = ls->head;
    while (tmp!=NULL)
    {
        cout<<tmp->data<<" "<<endl;
        tmp = tmp->next;
    }
    cout<<endl;

}

main()
{
    srand(time(0));
    List *L;
    L = createList();
    for (int i=0; i<80; i++)
    {
        int result = rand()%1000 + 10;
        insert_Begin(L, result);
    }
    displayList(L);
    
}