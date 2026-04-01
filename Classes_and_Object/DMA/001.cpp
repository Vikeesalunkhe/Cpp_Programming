#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

class student{
public:
    int id;
    char *name;


    student ()
    {
        //name = (char *)malloc(20);     //dynamic memory allocation for name using malloc function
        name = new char[20];             //dynamic memory allocation for name using new operator 
        strcpy(name, "vikee");
    }

    void display(){
        cout<<"ID : "<<id<<endl;
        cout<<"NAME : "<<name<<endl;
    }
};

int main(){
    student s1;
    s1.display();
    //free(s1.name);   //dynamic memory deallocation for name using free function
    delete s1.name;  //dynamic memory deallocation for name using delete operator
}