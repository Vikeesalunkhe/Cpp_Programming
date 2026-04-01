#include <iostream>
using namespace std;

class student{
public:
    int id;
    float mark;

    student()
    {
        id = 10;
        mark = 20;
    }

    student(int i, float m)           //1 : Default constructor
    {
        id = i;
        mark = m;

    }

    void display(){                     //2 : parameterized constructor
        cout<<"ID : "<<id<<endl;
        cout<<"Mark : "<<mark<<endl;

    }
};


int main(){
    student s1;                      //called default constructor
    s1.display();

    student s2(100, 34.34);          //called parameterized constructor
    s2.display();
 
    student s4 = s2;                // 3 : copy constructor copy s2 object in s4
    s4.display();

    return 0;
}