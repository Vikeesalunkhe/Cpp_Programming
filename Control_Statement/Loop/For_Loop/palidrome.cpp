#include <iostream>
using namespace std;

int main() {

	int num;
	cout<<"Enter value of num : ";
	cin>>num;
	int rem;
	int revers = 0;

	for (num; 0<num; ) {
	
		rem = num%10;
		revers = revers*10+rem;
		num/=10;

	}
	cout<<revers<<endl;
	return 0;

}
