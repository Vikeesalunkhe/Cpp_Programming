/*
 Program : Write a cpp program, take a number, and print whether it is less than 10 or
greater than 10.
Input1: var=5
Output: 5 Is Less than 10.
Input2: var=16
Output: 16 Is greater than 10.
Input3 : var=10
Output: ??
 */

#include<iostream>
using namespace std;

int main() {


	int var;
	cout<<"Enter the no.:";
	cin>>var;

	if (var < 10) {
	
		cout<<var<<" is less then 10"<<endl;
	}
	else if (var > 10) {
	
		cout<<var<<" is greater than 10"<<endl;
	}
	else {
	
		cout<<"equal no";
	}
	return 0;


}
