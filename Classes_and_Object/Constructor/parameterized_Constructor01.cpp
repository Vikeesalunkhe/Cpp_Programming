#include <iostream>
using namespace std;

class student{
public:
    int id;
    float mark;

    student(int i, float m)
    {
        id = i;
        mark = m;
        cout<<"ID : "<<id<<endl;
        cout<<"Mark : "<<mark<<endl;
    }
};


int main(){

    student s1(100, 34.34);
    return 0;
}