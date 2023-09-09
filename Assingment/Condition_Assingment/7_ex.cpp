/*
 *Program 1: Write a java program to check if a number is even or odd.
Input: var=10;
Output: 10 is an even no
Input: var=37;
Output: 37 is an odd no
Input : var = 0
Output: ???
 */

#include<iostream>
using namespace std;

int main() {

	int var;
	cout<<"Enter the variable no. :";
	cin>>var;

	if (var % 2 == 0) {
	
		cout<<var<<" is an even no"<<endl;
	}
	else if (var % 2 == 1) {
	
		cout<<var<<" is an odd no"<<endl;
	}
	else {
	
		cout<<"invalid no"<<endl;
	}
	return 0;

}
