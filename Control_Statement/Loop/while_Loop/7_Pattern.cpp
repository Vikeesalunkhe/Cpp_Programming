#include <iostream>

int main() {

	int num;
	std::cout<<"Eunter Value of num : ";
	std::cin>>num;
	
	int i = 0;
	while (i<num){
	
		int j=0;
		while (j<num){
		
			std::cout<<j<<"\t";
			j++;
		}
		std::cout<<std::endl;
		i++;
	}	
}
