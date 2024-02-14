#include <iostream>
using namespace std;

void Demo(int z){

	z = 100;
}

int main(){

	int a = 5;
	Demo(a);
	
	cout<<a<<endl;

	return 0;	
}
