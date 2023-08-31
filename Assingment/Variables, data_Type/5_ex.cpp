/*
 Q5 - Write a C++ program to find size of basic data types. (Medium)
Sample Input : Nil (Here it is expected that we explore the size of each data type that would be
used commonly in the programs ahead. We can simply make use of sizeof(datatype) operator
to accomplish this. Give it a try to know the data types in depth)
*/


#include<iostream>
using namespace std;

int main(){

     cout<<"The size of(int) is :" << sizeof(int) << " bytes" <<endl;
     cout<<"The size of(char) :"<< sizeof(char) << " bytes" <<endl;
     cout<<"The size of(float) :"<< sizeof(float) << " bytes" <<endl;
     cout<<"The size of(bool) :"<< sizeof(bool)<< " bytes" <<endl;
     cout<<"The size of (double) :"<< sizeof(double) <<" bytes" <<endl;
     cout<<"The size of (short) :" << sizeof(short) <<" bytes" <<endl;
     cout<<"The size of(long) :"<< sizeof(long) << " bytes" <<endl;
     cout<<"The size of(long long) :"<<sizeof(long long) <<" bytes" <<endl;
     cout<<"The size of(long doublr) :"<< sizeof(long double) <<" bytes" <<endl;
          

     return 0;


}
