#include <iostream>
#include <fstream>
using namespace std;
main(){

    fstream file;
    file.open("testing.txt", ios::out);
    file<<"Hello World"<<endl<<"Welcome to CADT";
    file.close();





}