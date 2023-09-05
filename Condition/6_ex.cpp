#include<iostream>
using namespace std;

int main() {

	int day;
	cout<<"Enter the day no. :";
        cin>>day;

	switch(day) {
	   
		case 1:
		cout<<"Monday";
		break;

		case 2:
		cout<<"Tuesday";
		break;

		case 3:
		cout<<"Wed";
		break;

		case 4:
		cout<<"Thurs";
		break;

		case 5:
		cout<<"frid";
		break;

		case 6:
		cout<<"saturday";
		break;

		case 7:
		cout<<"Sunday";
		break;
                
                default:
                cout<<"default case";
               		


	}
	return 0;
}
