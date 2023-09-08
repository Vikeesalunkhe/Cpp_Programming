/*
Q6. Write a program to calculate marks to grades . Follow the conversion rule as given below :

Sample Input : Enter Your Marks: 98
Sample Output : Your Grade is A+



Cracking the Coding Interview in C++ - Foundation

100 – 90 = A+
90 – 80  = A
80 – 70  = B+
70 – 60  = B
60 – 50  = C
50 – 40  = D
40 – 30  = E
30 – 0   = F
 */

#include<iostream>
using namespace std;

int main() {

	int marks;
	cout<<"Enter the marks :";
	cin>>marks;

	if (marks >= 90) {
	 
	       cout<<"A+";	
	} 
	else if ((marks < 90) && (marks >= 80)) {
	
		cout<<"A";
	}
	else if ((marks < 80) && (marks >=70) ){
	
		cout<<"B+";
	}
	else if ((marks < 70) && (marks >= 60)) {
	
		cout<<"B";
	} 
	else if ((marks < 60) && (marks >= 50)) {
	
		cout<<"C";
	}
	else if ((marks < 50) && (marks >= 40)) {
	
		cout<<"D";
	}
	else if ((marks < 40) && (marks >= 30)) {
	
		cout<<"E";
	}
	else if ((marks < 30) && (marks >= 0)) {
	
		cout<<"F";
	}
	return 0;
}











