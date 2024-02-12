#include <iostream>
int main() {

	int num;
	std::cout<<"Enter Value of num : ";
	std::cin>>num;

	int FactNum = 1;
	int i=1;

	for (num; num>=i; num--){
	
		FactNum*= num;
	}
	std::cout<<FactNum<<std::endl;
	return 0;
}
