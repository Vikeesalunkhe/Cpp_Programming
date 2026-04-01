#include <iostream>
using namespace std;

class parent
{
    public:
    int id;

    parent(int i)
    {
        id = i;
        cout<<"parent class constructor"<<i<<endl;
    }
};

class child01 : public parent
{
    public:
    int exp;
    child01(int i=0, int e=0) : parent(i)
    {
        exp = e;
        cout<<"child class constructor"<<endl;

    }

    void display(){

        cout<<"id : "<<id<<endl;
        cout<<"exp : "<<exp<<endl;
    }
};

int main(){
    parent p1(400);
    child01 ch1;
    ch1.display();
    child01 ch2(100, 3);
    ch2.display();
    return 0;
}


// parent class constructor400
// parent class constructor0
// child class constructor
// id : 0
// exp : 0
// parent class constructor100
// child class constructor
// id : 100
// exp : 3