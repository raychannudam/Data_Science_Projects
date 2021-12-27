#include <iostream>
#include <string.h>
using namespace std;

struct Element
{
    string data;
    Element *next;
    Element *previous;
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
    ls->n=0;
    ls->head = NULL;
    ls->tail = NULL;
    return ls;
}
void insert_begin(List *ls, string newData)
{
    Element *e;
    e = new Element();
    e->data = newData;
    e->previous = NULL;
    e->next = ls->head;
    if (ls->n == 0)
    {
        ls->tail = e;
    }
    if (ls->n != 0)
    {
        ls->head->previous = e;
    }
    ls->head = e;
    ls->n = ls->n+1;
}

main()
{
    List *L;
    L = createList();
    for (int i=0; i>=35; i--)
    {
        string result = strcpy(alpha, result);
        insert_begin(L, result);
    }
}