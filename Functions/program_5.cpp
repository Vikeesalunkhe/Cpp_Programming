#include <iostream>
using namespace std;

void myFun(string Name, int age){

	cout<<Name<<" you are "<<age<<" year old\n";
}


int main(){

	int i,num;
	i = 0;
	num = 5;

	for (i; i<num; i++){
	
		string name;
		int age=21;
		cout<<"Enter name and age  here : ";
		cin>>name;
		


		myFun(name,age);
	}

	return 0;
}
