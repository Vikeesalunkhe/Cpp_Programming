#include <iostream>
using namespace std;


class student1 
{
    public:
    int id;
    float marks;;
    static int batch;
    void display();
};

void student1::display(){

    cout<<"id : "<<id<<endl;
    cout<<"marks : "<<marks<<endl;

}

struct student2 {
    int id;
    float marks;
    static int batch;
    void display();
};

void student2::display(){

    cout<<"id : "<<id<<endl;
    cout<<"marks : "<<marks<<endl;
}

int main(){

    student1 s1 = {200, 35.6};
    student2 s2;
    cout<<"sizeof s1 : "<<sizeof(s1)<<endl;
    cout<<"sizeof s2 : "<<sizeof(s2)<<endl;
    s1.id = 10;
    s2.id = 20;

    s1.display();
    s2.display();
    
}