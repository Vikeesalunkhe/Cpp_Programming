/*
  Q5- Create a calculator using switch statement to perform addition, subtraction, multiplication and division.
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

	int num1 ,num2;
	char Operator;

	cout<<"Enter the num1 :";
	cin>>num1;

	cout<<"Enter the num2 :";
	cin>>num2;

	cout<<"Enter the Operator +,-,*,/ :";
	cin>>Operator;


	switch(Operator) {
	
		case '+':
		cout<<num1 + num2;
		break;

		case '-':
		cout<<num1 - num2;
		break;

		case '*':
		cout<<num1 * num2;
		break;

		case '/':
		cout<<num1 / num2;
		break;


	}
	return 0;
}
