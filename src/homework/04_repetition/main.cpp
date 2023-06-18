//write include statements
#include <iostream>
#include <string>
//write using statements
double get_gc_content(const std::string &DNAString) {
int totalLetters=0;
int GCLetter=0;
for (char symbol : DNAString){
    if (symbol == 'C'){
        GCLetter++;
    }
    if (symbol == 'G'){
        GCLetter++;
    }
    totalLetters++;
}
if (totalLetters==0){
    return 0;
}
int DNA = (GCLetter * 100) / totalLetters;
return DNA;
}
int main(){ 
std::string DNASequence;

	while(true){
		std::cout << "Enter the DNA sequence: ";
		std::cin >> DNASequence;
		double DNA = get_gc_content(DNASequence);
		std::cout << "GC content: " << DNA << "%" << "\n";
		std::cout << "Continue? (y/n): ";
		std::string choice;
		std::cin >> choice;
		if (choice != "y" && choice != "Y"){
			break;
		}

	}
	return 0;
}
