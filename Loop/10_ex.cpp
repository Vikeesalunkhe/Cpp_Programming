#include <iostream>
using namespace std;

int main() {
	
	int num;
	cout<<"Enter Value of Rows no. : ";
	cin>>num;

	for (int i = 1;i<num+1;i++) {
		
		for (int j = 1;j<num+1;j++) {
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
