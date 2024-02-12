#include <iostream>
using namespace std;

int main() {

	int DecimalNum;
	cout<<"Enter Value of num : ";
	cin>>DecimalNum;

	int ans = 0;
	int power = 1;

	while (DecimalNum>0) {
	
		int rem = DecimalNum%2;
		ans+= rem*power;
		power*=10;
		DecimalNum/=2;
	}
	cout<<ans<<endl;

	return 0;
}
