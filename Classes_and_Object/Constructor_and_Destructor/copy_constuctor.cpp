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

    student(student &obj)  //copy constructor
    {
        cout<<"Copy Constructor called"<<endl;   //copy constructor is called when the object is initialized with another object of the same class, it is used
        name = new char[20];                   //dynamic memory allocation for name
        strcpy(name, obj.name);                //copying the name from the object passed as argument to the copy constructor to the name of the current object, this will create a new memory
    }

    ~student()
    {
        cout<<"Destructor called"<<endl;                //default destructor is called when the object goes out of scope, it is used to free up the resources that were allocated to the object during its lifetime.
        delete name;                            //dynamic memory deallocation for name
    }

    void display(){
        cout<<"ROLL NO : "<<roll_no<<endl;
        cout<<"NAME : "<<name<<endl;
    }
};

int main()
{
    student obj01;  //when the object is created, the constructor is called and when the object goes out of scope, the destructor is called.
    student obj02(obj01);  //copy constructor is called when the object is initialized with another object of the same class, it is used to create a new object as a copy of an existing object.
    obj02.roll_no = 101;  //modifying the roll_no of obj02 will not modify the roll_no of obj01 because both obj01 and obj02 are different objects.    
    strcpy(obj02.name, "salunkhe");  //modifying the name of obj02 will not modify the name of obj01 because both obj01 and obj02 are pointing to different memory locations for name.
    obj01.display();
    obj02.display();    
    return 0;
}



// Copy Constructor called
// ROLL NO : 1651076199
// NAME : vikee
// ROLL NO : 101
// NAME : salunkhe
// Destructor called
// Destructor called

