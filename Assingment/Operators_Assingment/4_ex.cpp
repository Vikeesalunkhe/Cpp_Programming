/*
 *Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit number. (Hard)
 Sample Input : 12345
Sample Output : 1+4=5
 */

#include<iostream>

int main() {
	
	int num = 0;
	std::cout << "Enter 5 digit number : " << std::endl;
	std::cin >> num;
	
	int rem = 0;
	int sum = 0;

	rem = num % 10;
	num /= 10;

	rem = num % 10;
	sum = sum + rem;
	num /= 10;

	num /= 10;
	num /= 10;

	rem = num % 10;
	sum = sum + rem;

	std::cout << sum << std::endl;
	return 0;
}
