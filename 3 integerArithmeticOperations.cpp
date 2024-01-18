#include <iostream>

//function to add two numbers
int add(int a, int b){
    return a + b;
}

//function to subtract two numbers
int subtract(int a, int b){
    return a - b;
}

//function to divide two numbers
int division(int a, int b){
    if(b !=0){
        return a / b;
    } else {
        std::cout<< "Error : Cannot be division by zero!" << std :: endl;
        return 0;
    }
    
}

//function to multiply two numbers
int multiplication(int a, int b){
    return a * b;
}

//function to find the remainder (modulo operations)
int modulo(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        std::cout << "Error: Modulo by zero!" << std::endl;
        return 0;
    }
}

//function to solving number raised to power
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}


int main() {
    /*
    Declaring variable x and y
    Storing value inside variable x and y
    */
    int x = 50;
    int y = 10;

    int additionResult = add(x, y);
    int subtractionResult = subtract(x, y);
    int divisionResult = division(x, y);
    int multiplicationResult = multiplication(x, y);
    int moduloResult = modulo(x, y);
    int powerResult = power(x, y);
    /*
    printing each result 
    */
    std::cout << "The addition result is: " << additionResult << std::endl;
    std::cout << "The subtraction result is: " << subtractionResult << std::endl;
    std::cout << "The division result is: " << divisionResult << std::endl;
    std::cout << "The multiplication result is: " << multiplicationResult << std::endl;
    std::cout << "The modulo result is: " << moduloResult << std::endl;
    std::cout << "The power result is: " << powerResult << std::endl;

    return 0;
}