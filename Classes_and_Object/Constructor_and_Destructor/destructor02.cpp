#include <iostream>
#include <string.h>
using namespace std;

class student
{
    public:
    int roll_no;
    char *name;

    student()
    {
        cout<<"Constructor called"<<endl;         //default constructor is called when the object is created, it is used to initialize the data members of the class.
        name = new char[20];                   //dynamic memory allocation for name
        strcpy(name, "vikee");
    }

    ~student()
    {
        cout<<"Destructor called"<<endl;                //default destructor is called when the object goes out of scope, it is used to free up the resources that were allocated to the object during its lifetime.
        //delete name;                            //dynamic memory deallocation for name
    }
};

int main()
{
    student obj01;  //when the object is created, the constructor is called and when the object goes out of scope, the destructor is called.
    student obj02 = obj01;  //copy constructor is called when the object is initialized with another object of the same class, it is used to create a new object as a copy of an existing object.
    obj02.name[0] = 'V';  //modifying the name of obj02 will also modify the name of obj01 because both obj01 and obj02 are pointing to the same memory location for name.
    delete obj01.name;  //dynamic memory deallocation for name of obj01, this will also deallocate the memory for name of obj02 because both obj01 and obj02 are pointing to the same memory location for name.
    return 0;
}