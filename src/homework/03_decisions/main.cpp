//write include statements
#include <iostream>
#include <string>
#include "decisions.h"
int main() 
{
	int grade;
	std::cout<<"Enter the number grade:";
	std::cin>>grade;
	std::string letter_grade=get_letter_grade_using_switch(grade);
	std::cout<<"Letter Grade:"<<letter_grade<<"\n";
	return 0;
}