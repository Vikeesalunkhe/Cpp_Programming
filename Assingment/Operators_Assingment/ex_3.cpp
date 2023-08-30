/*Q6 - Design a calculator to perform basic arithmetic operations (+,-,/,*,%) 

Sample Input : 8 10
Sample Output :
Sum = 18
Difference = -2
Product = 80
Division = 0.8
*/

#include<iostream>
using namespace std;

int main() {

	float num1;
	float num2;

	cout<<"Enter the first no :";
	cin>>num1;

	cout<<"Enter the second no :";
	cin>>num2;

	//sum
	cout<<(num1 + num2)<<endl;

	//difference
	cout<<(num1 - num2)<<endl;

	//product
	cout<<(num1 * num2)<<endl;

	//divisiom
	cout<<(num1 / num2)<<endl;

	return 0;

}
