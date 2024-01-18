#include <iostream>
//include the <string> header for string-related operations
#include <string> 

//the entry point of the program
int main() {
    /*
    - Declaring StringOne and stringTwo Variables
    - Adding two string and making single string "combined"
    - priting result on screen
    */
    std::string stringOne = "Hello";
    std::string stringTwo = " World";
    std::string combined = stringOne + stringTwo;
    std::cout <<combined<< std::endl;
    return 0; 
}
