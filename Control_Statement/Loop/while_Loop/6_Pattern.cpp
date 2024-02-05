#include <iostream>

int main () {

	int num;

	std::cout<<"Enter value of num : ";
	std::cin>>num;


	int i = 0;
	while(i<num) {
		int j =0;
		while (j<i+1){
		
			std::cout<<"*";
			j++;
		}
		std::cout<<std::endl;
		i++;

	}
}
