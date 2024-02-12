#include <iostream>
using namespace std;

int main() {

	int BinaryNum;
	cout<<"Enter Value of BinaryNum : ";
	cin>>BinaryNum;

	int power = 1;
	int ans = 0;

	while (BinaryNum>0) {
	
		int rem = BinaryNum%10;
		ans+= power*rem;
		power*=2;
		BinaryNum/=10;
	}
	cout<<ans<<endl;
	return 0;
}
