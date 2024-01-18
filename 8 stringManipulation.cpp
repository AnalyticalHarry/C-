#include <iostream>
#include <string> 

//string declaration and initialisation
std::string firstString = "Hello, ";
std::string secondString("World!");

//void function to add two string
void concatenateStrings() {
    //combining two strings into a single variable
    std::string combined = firstString + secondString;
    //printing the combined string
    std::cout << combined << std::endl;
}

//void function to replace string
void replaceString() {
    //combining two strings into a single variable
    std::string combined = firstString + "My name is Harry and Learning C++";
    //printing the combined string
    std::cout << combined << std::endl;
}

//void function for length of string
void lengthString() {
    float lengthOne = firstString.length();
    float lengthTwo = secondString.length();
    //print result on output
    std::cout << "Length of firstString: " << lengthOne << std::endl;
    std::cout << "Length of secondString: " << lengthTwo << std::endl;
}

//silicing string 
void subString(){
    //silicing string between index 0 to 3, where 0 is H, 1 is e and 2 is l
    std::string subString = firstString.substr(0, 3);
    std::cout << "Substring: " << subString << std::endl;
}

//string comparision
int isEqual() {
    bool variableIsEqual = (firstString == secondString);
    if (variableIsEqual) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
    return 0;
}

//void function for accesing characters
void characters(){
    //index 0 which is "H"
    char firstChar = firstString[0];
    //index 1 which is "O"
    char secondChar = secondString[1];
    //index 1 which is "E"
    char thirdChar = firstString.at(1);
    //print result in output
    std::cout<< firstChar <<std::endl;
    std::cout<< secondChar <<std::endl;
    std::cout<< thirdChar <<std::endl;
}

/*
size_t is an unsigned integral type that is typically used to represent sizes or indices, 
especially when dealing with containers like arrays, vectors, or strings. 
It is an implementation-defined type and is guaranteed to be able to represent
 the maximum size of an object that can be held in memory.*/

 //void function to find and replace
void findAndReplace() {
    size_t found = firstString.find("Hello");
    if (found != std::string::npos){
        firstString.replace(found, 5, "Hi");
        std::cout << "After replacement: " << firstString << std::endl;
        std::cout << "After replacement first and Second String is : "<<firstString + secondString << std::endl; 
    }
}

/*
cin stands for "character input" and is pronounced "see in" or "console input."
*/
void userInput(){
    std::string firstName;
    std::string lastName;

    //prompt the user to enter their first name
    std::cout<< "Enter your First Name: ";
    //character input
    std::cin >> firstName;
    //prompt the user to enter last name
    std::cout<<"Enter your Last Name: ";
    //character input
    std::cin >> lastName;

    //print name on screen
    std::cout<<firstName<<" "<<lastName << std::endl;

}

int main(){
    concatenateStrings();
    replaceString();
    lengthString();
    characters();
    subString();
    isEqual();
    findAndReplace();
    userInput();
    return 0;
}

