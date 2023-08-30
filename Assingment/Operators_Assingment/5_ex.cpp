/*
 Q5 - Write a program to calculate the sum of digits of a 3 digit number.
 Sample Input : 123
Sample Output : 6
 */


#include<iostream>
using namespace std;

int main() {


	int num = 123; 
	//cout<<"Enter the 3 digit value : ";
	//cin>>num;
	int rem = 0;
	int sum = 0;

	rem = num % 10;  //rem = 3
	sum = sum + rem; //sum = 0 + 3 = 3

	num = num / 10;  //num / 10 = 12
	rem = num % 10;  //12 % 10 = 2
	sum = sum + rem;  //3+2 = 5

	num = num / 10;  // num / 10 = 1
	rem = num % 10;  //1%10 = 1
        sum = sum + rem; //5+1 = 6

	cout<<sum;

	return 0;
}
