/*
 *print the sum of the first n natural numbers whre n is the input
 */

#include<iostream>
using namespace std;


int main() {

	int sum = 0;
	int n;
	cin>>n;
	int i = 1;

	while (i <= n) {
	
		sum = sum + i;
		i++;
	}

cout<<sum;
return 0;

}
