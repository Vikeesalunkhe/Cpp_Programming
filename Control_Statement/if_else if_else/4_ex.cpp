/*
 nested if else
 */

#include<iostream>
using namespace std;

int main() {


	int marks;
	cout<<"Enter you marks :";
	cin>>marks;

	if (marks > 50) {

		cout<<"you are able to engineering" <<endl;
	
	
		if (marks >= 80) 

			cout<<"welcome to computer science" <<endl;

		else if (marks >= 70)

			cout<<"Welcome to mechanical "<<endl;

		else if (marks >= 60)

			cout<<"Welcome to civil"<<endl;
	}

	else {
	
		cout<<"you are able to BSC";
	}

	return 0;
}
