//write include statements
#include <iostream>
#include <string>
std::string get_letter_grade_using_switch(int grade);
int main() 
{
	int grade;
	std::cout<<"Enter the number grade:";
	std::cin>>grade;
	std::string letter_grade=get_letter_grade_using_switch(grade);
	std::cout<<"Letter Grade:"<<letter_grade<<"\n";
	return 0;
}
std::string get_letter_grade_using_switch(int grade) 
{
std::string letter_grade;
switch(grade/10){
	case 10:
	case 9:
	letter_grade="A";
	break;
	case 8:
	letter_grade="B";
	break;
	case 7:
	letter_grade="C";
	break;
	case 6:
	letter_grade="D";
	break;
	default:
	letter_grade="F";
	break;
}
return letter_grade;
}
