//add include statements
#include <iostream>
#include <string>
//add function(s) code here
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
if (totalLetters=0){
    return 0;
}
double DNA = (static_cast<double>(GCLetter) / totalLetters) * 100.0;
return DNA;
}