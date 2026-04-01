#include <iostream>
using namespace std;

class Student01
{
    int id;
    float marks;

    //always keep public constructor function 
    public:
    Student01(){

        cout<<"This is Constructor Function called"<<endl;
        id = 10;
        marks = 23.45;
    }
};


int main(){

    Student01 obj01;   //when create obj constructor call automatically
}