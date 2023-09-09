/*
 Program : Write a cpp program, take a number, and print whether it is positive or
negative.
Input: num = 5
Output: 5 is a positive number
Input: num = -9
Output: -9 is a negative number
Input: num = 0
Output: ???????
 */

#include<iostream>
using namespace std;

int main() {

	int num;
	cout<<"Enter the no. :";
	cin>>num;

	if (num > 0) {
	
		cout<<num<<" is a positive number"<<endl;
	}
	else if (num < 0) {
	
		cout<<num<<" is a negative number"<<endl; 
	}

	else {
	
		cout<<num<<endl;
	}

	return 0;


}
