#include <iostream>

int main() {
	
	int num;
	std::cout<<"Enter value of num : ";
	std::cin>>num;

	for (int i=0;i<num;i++) {
	
		for (int j=0;j<num;j++) {
		
			std::cout<<"*";
		}
		//std::cout<<""<<std::endl;
		std::cout<<"\n";
	}
	return 0;
}
