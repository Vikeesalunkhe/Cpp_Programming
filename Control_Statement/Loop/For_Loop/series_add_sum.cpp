#include <iostream>
using namespace std;

int main() {

	int num;
	cout<<"Enter value of num : ";
	cin>>num;
	
	int i=1;
	int result = 0;

	for (i; i<=num; i++) {
	
		if (i%2==0) {
		
			result+=i;	
		
		}
		else{
		
			result-=i;
		}

	}
	cout<<result<<endl;
	return 0;
}
