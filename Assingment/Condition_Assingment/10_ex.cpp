/*
 Program 4: Write a java program that checks a number from 0 to 5 and prints its
spelling, if the number is greater than 5 print the number is greater than 5
Input1 : var= 4
Output: four
Input2 : var = 6
Output: number is greater than 5
Input3 : var = -6
Output: ???
 */

#include<iostream>
using namespace std;

int main() {

	int var;
	cout<<"Enter the no. :";
	cin>>var;

	if (var == 1) {
	
		cout<<"One";
	}
	else if (var == 2) {
	
		cout<<"Two"; 
	}
	else if (var == 3) {
	
		cout<<"Three";
	}
	else if (var == 4) {
	
		cout<<"Four";
	}
	else if (var == 5) {
	
		cout<<"Five";
	}
	else if (var > 5) {
	
		cout<<var<<" is greatr then 5";
	}
	else {
	
		cout<<"negative no :";
	}

	return 0;
}
