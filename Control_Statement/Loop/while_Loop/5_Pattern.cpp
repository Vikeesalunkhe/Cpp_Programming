#include <iostream>
using namespace std;

int main() {
	
	int num;
	cout<<"Enter value of rows no. : ";
	cin>>num;
	int i = 1;

	while (i<=num) {
		int j = 1;
		while (j<=num) {
			cout<<"* ";
			j++;
		}
		i++;
		cout<<endl;
	}
	return 0;
}
