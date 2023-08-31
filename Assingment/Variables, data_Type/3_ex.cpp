/*
Q3 -  Write a C++ program to calculate the cube of a number. (Easy)
Sample Input : 4
Sample Output : 64
*/


#include<iostream>
using namespace std;

int main(){

   int num;
   cout<<"Enter a No. : ";
   cin>>num;

   int cube = num * num * num;
   cout<<"The cube of " << num <<" is :" << cube;

  return 0; 



}
