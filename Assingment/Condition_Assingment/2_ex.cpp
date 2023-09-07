/*
 Q2- Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
calculate Profit or Loss.

 Explanation :
Formula for profit and loss
Profit = S.P - C.P
Loss = C.P - S.P
(S.P is Selling Price and C.P is Cost Price)
Sample Input :
Enter cost price: 4000
Enter selling price: 9560
Sample Output :
Profit = 5560
 */

#include<iostream>
using namespace std;

int main() { 
        

	//Enter price value from user
	int cost_price;
	cout<<"Enter cost price :";
	cin>>cost_price;
	
	int selling_price;
	cout<<"Enter selling price :";
	cin>>selling_price;

	int profit = selling_price - cost_price;
	int loss = cost_price - selling_price;


	if (selling_price > cost_price) {
	
	        cout<<"Total profit :"<<profit;
	}
        
	else {
	
		cout<<"Total loss :"<<loss;
	}
	return 0;
}
