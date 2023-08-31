/*
Q3 - Write a C++ program to take length and breadth of a rectangle and print its area. (Easy)
Sample Input : 7, 4
Sample Output : 28
*/

#include<iostream>
using namespace std;

int main(){

    int lenght;
    int breadth;
    

    cout<<"enter the lenght :";
    cin>>lenght;
    cout<<"enter the breadth :";
    cin>>breadth;

    cout<<"area of rectangle is :";
    cout<<lenght * breadth;

    return 0;


}
