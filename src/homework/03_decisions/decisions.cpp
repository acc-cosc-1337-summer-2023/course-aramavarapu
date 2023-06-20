//write include statement for decisions header
#include <iostream>
#include <string>

//Write code for function(s) code here
std::string get_letter_grade_using_switch(int grade) 
{
std::string letter_grade;
 if (grade < 0) {
        letter_grade = "Invalid";
    } else {
        switch (grade / 10) {
            case 10:
            case 9:
                letter_grade = "A";
                break;
            case 8:
                letter_grade = "B";
                break;
            case 7:
                letter_grade = "C";
                break;
            case 6:
                letter_grade = "D";
                break;
            default:
                letter_grade = "F";
                break;
        }
    }
    
    return letter_grade;
}
std::string get_letter_grade_using_if(int grade)
{
 std::string letter_grade;
    
    if (grade < 0) {
        letter_grade = "Invalid";
    } else if (grade >= 90) {
        letter_grade = "A";
    } else if (grade >= 80) {
        letter_grade = "B";
    } else if (grade >= 70) {
        letter_grade = "C";
    } else if (grade >= 60) {
        letter_grade = "D";
    } else {
        letter_grade = "F";
    }
    
    return letter_grade;
}