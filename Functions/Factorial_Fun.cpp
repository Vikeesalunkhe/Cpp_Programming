#include <iostream>
using namespace std;


int Factorial(int num){
	
	int Fact = 1;
	int i=1;

	while (i<=num){
		Fact*=i;
		i++;
	}

	return Fact;
}

int main() {

	int Num;
	cout<<"Enter Value of : ";
	cin>>Num;

	int result = Factorial(Num);

	cout<<result<<endl;
	
	return 0;
}
