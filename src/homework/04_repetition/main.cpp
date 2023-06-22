//write include statements
#include <iostream>
#include <string>
#include "repetition.h"
//write using statements
int main(){ 
std::string DNASequence;

	while(true){
		std::cout << "Enter the DNA sequence: ";
		std::cin >> DNASequence;
		double DNA = get_gc_content(DNASequence);
		std::cout << "GC content: " << DNA << "\n";
		std::cout << "Continue? (y/n): ";
		std::string choice;
		std::cin >> choice;
		if (choice != "y" && choice != "Y"){
			break;
		}

	}
	return 0;
}
