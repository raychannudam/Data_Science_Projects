#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

struct Cafe{
    string no;
    string name;
    string price;
};
Cafe c[20];
int n=10;

void menuList(){
    fstream file;
    file.open("Caffee.txt",ios::in);
    for(int i=1; i<=10; i++)
    {
            file>>c[i].no>>c[i].name>>c[i].price;
            cout<<c[i].no<<"\t"<<c[i].name<<"\t"<<c[i].price<<"\n";
    }
    file.close();
}

main()
{
    int n,item;
    do
    {
    cout<<"\n\n";
    cout<<"==========Menu List=========="<<endl;
    cout<<"............................."<<endl;
    cout<<"............................."<<endl;
    cout<<"~~~~~~~~~~CADT Cafe~~~~~~~~~~"<<endl;
    //Show cafe list
    menuList();
    cout<<"............................."<<endl;
    cout<<"............................."<<endl;
    cout<<"Enter item no: ";
    cin>>item;

    /*cout<<"===Please choose an option==="<<"\n\n";
    cout<<"1.Add product to buy"<<endl;
    cout<<"2.Update buying"<<endl;
    cout<<"3.Remove product from serving"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"Option:  ";
    cin>>n;
    */          
    }while(item>0&&item<=10);
}