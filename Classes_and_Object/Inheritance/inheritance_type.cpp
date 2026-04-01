#include <iostream>
using namespace std;

class parent1
{
    public:
    int id;
    parent1()
    {
        cout<<"parent1 class constructor"<<endl;
    }

    ~parent1()
    {
        cout<<"parent1 class destructor"<<endl;
    }
};

class parent2
{
    public:
    int id;
    parent2()
    {
        cout<<"parent2 class constructor"<<endl;
    }

    ~parent2()
    {
        cout<<"parent2 class destructor"<<endl;
    }
};

class child : public parent1, public parent2
{
    public:
    int id;

    child()
    {
        cout<<"Child class constructor"<<endl;

    }

    ~child()
    {
        cout<<"child class destructor"<<endl;
    }

};


int main(){

    child ch1;
    ch1.parent1::id = 100;
    cout<<ch1.parent1::id<<endl;
    return 0;
}

// parent1 class constructor
// parent2 class constructor
// Child class constructor
// 100
// child class destructor
// parent2 class destructor
// parent1 class destructor