//write include statements
#include <iostream>

//write namespace using statement for cout
int multiply_numbers(int number) 
{ 
	return number*2; 
}

int main()
{
	int num;
	std::cout<<"Enter a number: ";
	std::cin >> num;
	int result = multiply_numbers(num);
	std::cout<<"Result with num: "<<result;
	int num1=4;
	result = multiply_numbers(num1);
	std::cout<<"Result with num1: "<<result;

	return 0;
}
