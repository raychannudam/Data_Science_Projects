#include <iostream>

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
List* createList ()
{
    List *ls;
    ls = new List();
    ls->n = 0;
    ls->head = NULL;
    ls->tail = NULL;
    return ls;
}
void insert_begin(List *ls, int newData)
{
    Element *e;
    e= new Element();
    e->data = newData;

    e->next = ls->head;
    ls->head = e;
    if (ls->n == 0)
    {
        ls->tail = e;
    }
    ls->n =  ls->n + 1;
}
void displayInfoList (List *ls)
{
    Element *t;
    t = ls->head;
    while (t!=NULL)
    {
        cout<<t->data<<"\n";
        t=t->next;
    }
}
void insert_end(List *ls, int newData)
{
    if (ls->n == 0)
    {
        insert_begin(ls, newData);
    }
    else
    {
        Element *e;
        e = new Element();
        e->data = newData;
        e->next = NULL;

        ls->tail->next = e;
        ls->tail = e;
        ls->n = ls->n+1;
    }
}
void search(List *ls, int x)
{
    Element *tmp;
    tmp = ls->head;
    int counter = 0;
    while (tmp!=NULL)
    {
        if (tmp->data == x)
        {
            counter = counter + 1;
        }
        tmp = tmp->next;
    }
    if (counter==0)
    {
        cout<<"No data found\n";
    }
    else
    {
        cout<<"Found data "<<counter<<" times\n";
    }
}
void delete_be(List *ls)
{
    Element *tmp;
    tmp = ls->head;
    ls->head = ls->head->next;
    delete tmp;
    if (ls->n==1)
    {
        ls->tail = NULL;
    }
    ls->n = ls->n-1;
}
void delete_last(List *ls)
{
    Element *tmp;
    if (ls->n == 1)
    {
        delete_be(ls);
    }
    else
    {
        tmp = ls->head;
        for (int i=1; i<=ls->n-2; i++)
        {
            tmp = tmp->next;
        }
        ls->tail = tmp;
        tmp = tmp->next;
        ls->tail->next = NULL;
        delete tmp;
        ls->n = ls->n-1;
    }
}
main()
{
    List *L;
    L = createList();
    insert_begin(L, 3);
    insert_begin(L, 8);
    insert_begin(L, 0);
    insert_end(L, 7);
    insert_end(L, 20);
    displayInfoList(L);
    delete_be(L);
    delete_last(L);
    displayInfoList(L);
}