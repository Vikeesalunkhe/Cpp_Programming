#include <iostream>
using namespace std;

void Even(int num){
	
	int i=1;
	while (i<=num){
	
		if (i%2 == 0){
		
			cout<<i<<endl;
		}
		
		i++;



	}
}

int main(){

	int num;
	cout<<"Enter value of num : ";
	cin>>num;

	Even(num);

	return 0;
}
