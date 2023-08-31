/*
 print marks wise grade 
 */

#include<iostream>
using namespace std;

int main() {


	int marks;
	cout<<"Enter the marks :";
	cin>>marks;

	if (marks >= 80) {
	
		cout<<"A grade";
	}

	else if (marks >= 70) {
	
		cout<<"B grade";
	}

	else if (marks >=60) {
	
		cout<<"C grade";
	}

	else {
	
		cout<<"Fail";
	}

	return 0;
}
