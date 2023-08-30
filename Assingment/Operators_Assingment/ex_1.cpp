/*
 Q1 - Write a program to check whether two numbers (entered by user) are equal or not. 
Sample Input 1: 1, 2
Sample Output 1: 0
Sample Input 2: 2, 2
Sample Output 2: 1
*/

#include<iostream>
using namespace std;

int main() {
     
	int num1;
	int num2;

	cout<<"Enter first no :";
	cin>>num1;

	cout<<"Enter second no :";
	cin>>num2;
        
	//relation operator
	cout<<(num1==num2);        


	return 0;
 }
