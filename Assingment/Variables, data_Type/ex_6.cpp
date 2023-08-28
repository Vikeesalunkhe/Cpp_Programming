/*
 Q6 - Write a C++ program to swap two numbers with the help of a third variable. (Hard)
Sample Input : 2, 3
Sample Output : 3, 2
*/

#include <iostream>
using namespace std;

int main() {

    int num1, num2;

    //input the two numbers
    cout<<"Enter the first no :";
    cin>>num1;
    cout<<"Enter the second no :";
    cin>>num2;


    //swap the number using a third varoble
    int swap = num1;
    num1 = num2;
    num2 = swap;

    //out put the swapping number
    cout<<"*After swapping*" << endl;
    cout<<"First no :" << num1 << endl;
    cout<<"Second no :" << num2 << endl;


    return 0; 





}
