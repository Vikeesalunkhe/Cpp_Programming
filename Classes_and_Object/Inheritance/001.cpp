#include <iostream>
using namespace std;

class parent
{
    public:
    int id;

    parent(){
        cout<<"parent class constructor"<<endl;
    }
};

class child01 : public parent
{
    public:
    int exp;
    child01(int i, int e){
        exp = e;
        cout<<"child class constructor"<<endl;

    }

    void display(){

        cout<<"id : "<<id<<endl;
        cout<<"exp : "<<exp<<endl;
    }
};

int main(){

    parent p1;
    child01 ch1(100, 3);
    ch1.display();
    cout<<"sizeof parent : "<<sizeof(p1)<<endl;

    cout<<"sizeof child : "<<sizeof(ch1)<<endl;
    return 0;
}


// parent class constructor
// parent class constructor
// child class constructor
// id : -1901950656
// exp : 3
// sizeof parent : 4
// sizeof child : 8