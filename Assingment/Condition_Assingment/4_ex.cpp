/*
 Q4- Create a calculator using if-else statement to perform addition, subtraction, multiplication and division.
  Sample Input :
  Enter an operator (+, -, *, /): -
  Enter two numbers:
  6
  8
  Sample Output : 6 - 8 = -2
*/

#include<iostream>
using namespace std;

int main() {

	int num1;
	int num2;
	char Operator;

	cout<<"Enter num1 :";
	cin>>num1;

	cout<<"Enter num2 :";
	cin>>num2;

	cout<<"Enyter the Operator '+','-','*','/' :";
	cin>>Operator;

	if (Operator == '+') {
	
		cout<<num1 + num2;
	} 

	else if (Operator == '-') {
	
		cout<<num1 - num2;
	}

	else if (Operator == '*') {
	
		cout<<num1 * num2;
	}

	else {
	
		cout<<num1 / num2;
	}
	return 0;

} 


