/*
 *Program : Write a program to check day number(1-7) and print the corresponding
day of week
Input1 : 1
Output: Monday
Input2: 6
Output: Saturday
Input3: 8
Output: ????????
 */

#include<iostream>
using namespace std;

int main() {

	int day;
	cout<<"Enter the day no. :";
	cin>>day;

	if (day == 1) {
	
		cout<<"Monday";
	}
	else if (day == 2) {
	
		cout<<"Tuseday";
	}
	else if (day == 3) {
	
	        cout<<"Wednesday";
	}
	else if (day == 4) {
	
		cout<<"Thursday";
	}
	else if (day == 5) {
	
		cout<<"Friday";
	}
	else if (day == 6) {
	
		cout<<"Saturday";
	}
	else if (day == 7) {
	
		cout<<"Sunday";
	}

	else {
	
		cout<<"Invalid value";
	}

	return 0;
}
