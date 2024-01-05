#include<iostream>
using namespace std;

int main() { 

	int x;
	int y;
	cout<<"Enter Value of x :";
	cin>>x;

	cout<<"Enter value of y : ";
	cin>>y;

	if ((x % 2== 0) & (y % 2 ==0)) {
	
		cout<<"x and y is even";

	}
	else {
		cout<<"odd";
	}
	return 0;


}
