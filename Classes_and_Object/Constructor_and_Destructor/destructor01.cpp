#include <iostream>
using namespace std;

class student
{
    public:
    int roll_no;
    string name;

    student()
    {
        cout<<"Constructor called"<<endl;         //default constructor is called when the object is created, it is used to initialize the data members of the class.
    }

    ~student()
    {
        cout<<"Destructor called"<<endl;                //default destructor is called when the object goes out of scope, it is used to free up the resources that were allocated to the object during its lifetime.
    } 
};

int main()
{
    student obj01;  //when the object is created, the constructor is called and when the object goes out of scope, the destructor is called.

}