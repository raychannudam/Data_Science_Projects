#include<iostream>
using namespace std;
struct Student
{
    string _Student_Id;
    float _Student_Score;
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
    student->_Student_Score = data._Student_Score;
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
        cout<<tmp->_Student_Id<<" "<<tmp->_Student_Score<<endl;
        tmp = tmp->next;
    }
    cout<<endl;

}
main()
{
    Student std1;
    std1._Student_Id = "CADT001";
    std1._Student_Score = 234.64;
    Student std2;
    std2._Student_Id = "CADT002";
    std2._Student_Score = 267.00;
    Student std3;
    std3._Student_Id = "CADT003";
    std3._Student_Score = 250.34;

    List *L;
    L = createList();

    insert_Begin(L, std1);
    insert_Begin(L, std2);
    insert_Begin(L, std3);

    displayList(L);

}
