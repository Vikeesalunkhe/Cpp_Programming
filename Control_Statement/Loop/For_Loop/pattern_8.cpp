/*
 1234567
 2345671
 3456712
 4567123
 5671234
 6712345
 7123456
 */
 

#include <iostream>
using namespace std;

int main() {

	int num;
	cout<<"Enter Value of num : ";
	cin>>num;

	for (int i=1; i<=num; i++){
	
		for (int j=i; j<=num; j++){
		
			cout<<j;
		}
		for (int k=1; k<=(i-1); k++){
		
			cout<<k;
		}
		cout<<endl;
	}
}
