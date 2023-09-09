/*
Program 6: write a program to find a maximum between three numbers
inputs1 :
num1 = 1
num2 = 2
num3 = 3
Output: 3 is the maximum between 1, 2 and 3
inputs2 :
num1 = 1
num2 = 4
num3 = 3
Output: 4 is the maximum between 1, 4 and 3
inputs3 :
num1 = 42
num2 = 32
num3 = 42
Output: ?????
 */

#include<iostream>
using namespace std;

int main() {

	int num1,num2,num3;
	cout<<"Enter the value of num1 :";
	cin>>num1;
	cout<<"Enter the value of num2 :";
	cin>>num2;
	cout<<"Enter the value of num3 :";
	cin>>num3;

	if ((num1 > num2) && (num1 > num3)) {
	
		cout<<num1<<" is maximum between"<<num2<<"and "<<num3;
	}
	else if ((num2 > num1) && (num2 > num3)) {
	
		cout<<num2<<" is maximum between"<<num1<<"and "<<num3;
	}
	else {
	
		cout<<num3<<" is maximum between"<<num1<<"and "<<num2;
	}

	return 0;

}
