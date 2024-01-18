#include <iostream>

//function to add
double add(double a, double b) {
    return a + b;
}

//function to subtract
double sub(double a, double b) {
    return a - b;
}

//function for division
double div(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cout << "Error: Division by zero!" << std::endl;
        return 0.0;
    }
}

//function for multiplication
double multi(double a, double b) {
    return a * b;
}

//function to find the remainder (modulo operations)
double modulo(double a, double b) {
    if (b != 0) {
        double quotient = static_cast<int>(a / b);
        return a - (b * quotient);
    } else {
        std::cout << "Modulo by zero!" << std::endl;
        return 0.0;
    }
}

//function to calculate a number raised to a power
double power(double base_variable, double exponent_variable) {
    // Exponential rules: if the base has a power of zero, the value will be one
    // Declaring result as one to initialize the for loop
    double result = 1.0;
    for (double i = 0; i < exponent_variable; i++) {
        result = result * base_variable;
    }
    return result;
}

int main() {
    /*
    - declaring double variables number 1 and number 2
    - storing values inside those variables
    - calling functions, which are mentioned above for mathematical operations
    - printing values on the screen
    */
    //number one and number two
    double num1 = 20.0;
    double num2 = 5.0;
    //calling functions
    double addition_result = add(num1, num2);
    double subtraction_result = sub(num1, num2);
    double division_result = div(num1, num2);
    double multiplication_result = multi(num1, num2);
    double modulo_result = modulo(num1, num2);
    double power_result = power(num1, num2);
    //printing results on the screen
    std::cout << "Addition of two numbers is " << addition_result << std::endl;
    std::cout << "Subtraction of two numbers is " << subtraction_result << std::endl;
    std::cout << "Division of two numbers is " << division_result << std::endl;
    std::cout << "Multiplication of two numbers is " << multiplication_result << std::endl;
    std::cout << "Modulo of two numbers is " << modulo_result << std::endl;
    std::cout << "Power of two numbers is " << power_result << std::endl;
    return 0;
}

//******************************************************
// Author: Hemant Thapa
// Programming Language: C++
// Date Pushed to GitHub: 18.01.2024
// Email: hemantthapa1998@gmail.com
//******************************************************