/*
   *
  ***
 *****
*******
 
 */

#include <iostream>
using namespace std;

int main() {

        int num;
        cout<<"Enter value of num : ";
        cin>>num;

        for (int i=1; i<=num; i++){

                for (int j=1; j<=num-i; j++) {

                        cout<<" ";
                }
                for (int k=1; k<=i; k++){

                        cout<<"*";
                }
		for (int l=1; l<i; l++){
		
			cout<<"*";
		}
                cout<<endl;
        }
}
