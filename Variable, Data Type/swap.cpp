#include <iostream>
using namespace std;

int main(){

	int a,b;
	cout<<"Enter value of A : ";
	cin>>a;
	cout<<"Enter value of B :";
	cin>>b;

	int c;

	c = b;
	b = a;
	a = c;

	cout<<"A is : "<<a<<endl;
	cout<<"B is : "<<b<<endl;


}

