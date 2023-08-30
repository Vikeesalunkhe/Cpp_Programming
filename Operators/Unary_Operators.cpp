//Unary Operators

//+ : unary plus
//- : unary minus
//++ : increment operator
//-- : decrement operator
//! : logical complement operator



#include<iostream>
using namespace std;


int main() {

    int a = 4;
    int b = 8;

    //unary plus
    cout<<(a+b)<<endl; //12

    //unary minus
    cout<<(a-b)<<endl; //-4

    //post increment 
    cout<<(a++)<<endl; //4
    cout<<a<<endl;     //5

    //pre increment
    cout<<(++b)<<endl;  //9
    cout<<b<<endl;      //9

    //logical complement
    cout<<(!a)<<endl;  //false(0)
    


    return 0;


}
