/*
 *print odd no. 
 */

#include<iostream>
using namespace std;


int main() {

	int n;
	cout<<"Entr the no. :";
	cin>>n;

	int i = 1;

	for (i;i<=n;i++) {
	
		if (i % 2 == 1) {
		
			cout<<i<<endl;
		}
		
	}

	return 0;
}
