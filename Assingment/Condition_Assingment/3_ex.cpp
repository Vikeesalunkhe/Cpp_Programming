/*
 Q3 - Write a program to print absolute value of a number entered by the user.
 Sample Input: -1
 Sample Output: 1
 */


#include<iostream>
using namespace std;

int main() {

	int number;
	cout<<"Enter no. :";
	cin>>number;

	if (number < 0) {
	
		number = -number;
		cout<<number;
	}
	return 0;

}
