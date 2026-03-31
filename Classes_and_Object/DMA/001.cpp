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
        name = (char *)malloc(20);
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
    free(s1.name);
}