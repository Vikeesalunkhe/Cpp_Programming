#include <iostream>
#include <string.h>

using namespace std;

class student_info
{
    public:
    int roll_no;
    string name;
    int age;

    void add_student()
    {
        cout<<"Roll num : ";
        cin>>roll_no;
        cout<<"Name is : ";
        cin>>name;
    }

    void display_info()
    {
        cout<<"Roll num : "<<roll_no<<endl;
        cout<<"Name is : "<<name<<endl;
    }
};

int main()
{
    student_info obj01, obj02;
    cout<<"class size is : "<<sizeof(obj01)<<endl;

    obj01.roll_no = 100;
    obj01.name = "vikee";
    obj01.add_student();
    obj01.display_info();
}