#include <stdio.h>
#include <iostream>
using namespace std;
struct Student 
{
    string _Student_Id;
    string _Student_Name;
    string _Student_Tel;
    Student *next;
};
struct List
{
    int n;
    Student *head;
    Student *tail;
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
void insert_Begin(List*ls, Student data)
{
    Student *student;
    student = new Student();
    student->_Student_Id = data._Student_Id;
    student->_Student_Name = data._Student_Name;
    student->_Student_Tel = data._Student_Tel;
    student->next = ls->head;
    ls->head = student;
    if (ls->n == 0)
    {
        ls->tail = student;
    }
    ls->n = ls->n+1;
}
void displayList(List *ls)
{
    Student *tmp;
    tmp = ls->head;
    while (tmp!=NULL)
    {
        cout<<tmp->_Student_Id<<" "<<tmp->_Student_Name<<tmp->_Student_Tel<<endl;
        tmp = tmp->next;
    }
    cout<<endl;

}
main()
{
    int totalStd;
    cout<<"How many student? : ";
    cin>>totalStd;
    Student std[totalStd];
    List *L;
    L = createList();
    for (int i=0; i<totalStd; i++)
    {
        cout<<"Please input student "<<i+1<<" name: ";
        cin>>std[i]._Student_Name;
        cout<<"Please input student "<<i+1<<" ID: ";
        cin>>std[i]._Student_Id;
        cout<<"Please input student "<<i+1<<" Tel: ";
        cin>>std[i]._Student_Tel;
        insert_Begin(L, std[i]);
    }
    displayList(L);



}