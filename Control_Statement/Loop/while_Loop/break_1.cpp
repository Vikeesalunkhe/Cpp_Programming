#include <iostream>

int main() {

	int num = 0;


	while (10>num){
	
		if (num+1 % 2==0){
		
			continue;
			std::cout<<"This is Even no.";
		}
		std::cout<<num<<std::endl;
		num++;
	}
}
