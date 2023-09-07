/*Q1 - Write a program which takes the values of length and breadth from user and check if it is
a square or not. (Easy)
Sample Input :
Enter length: 5
Enter breadth: 4
Sample Output : It is a rectangle
*/

#include<iostream>
using namespace std;

int main() {
        
	// Input the length and breadth from the user
	int length;
	cout<<"Enter the lenght :";
	cin>>length;

	int breadth;
	cout<<"Enter the breadth :";
	cin>>breadth;

	// Check if it's a square or a rectangle
	if (length == breadth) {
	
		cout<<"It is a square";

	}
	else {
	
		cout<<"It is a rectangle";
	}
	return 0;
}
