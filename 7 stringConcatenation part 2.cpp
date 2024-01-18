#include <iostream>
#include <string> 

//function for concatenation
std::string concatenateStrings(const std::string stringOne, const std::string stringTwo) {
    return stringOne + stringTwo;
}

//function for the first set of concatenations, which will directly print output
void firstSetOfConcatenation() {
    std::string stringOne = "Hello";
    std::string stringTwo = " World";
    std::string combined = stringOne + stringTwo;
    std::cout << combined << std::endl;
}

//function for the seconf set of concatenations, which will print through function
void secondSetOfConcatenation() {
    std::string stringOne = "My name is ";
    std::string stringTwo = " Harry";
    std::string combined = concatenateStrings(stringOne, stringTwo);
    std::cout << combined << std::endl;
}

int main() {
    //calling the functions to perform the concatenations
    firstSetOfConcatenation();
    secondSetOfConcatenation();
    return 0;
}

//******************************************************
// Author: Hemant Thapa
// Programming Language: C++
// Date Pushed to GitHub: 18.01.2024
// Email: hemantthapa1998@gmail.com
//******************************************************