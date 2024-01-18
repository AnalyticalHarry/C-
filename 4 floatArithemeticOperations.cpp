#include <iostream>

//function to add
float add(float a, float b){
    return a + b;
}

//function to sub
float sub(float a, float b){
    return a - b;
}

//function for division
float div(float a, float b){
    if(b != 0){
        return a / b;
    }else{
        std::cout << "Error: Division by zero!" << std::endl;
        return 0;
    }
}

//function for multiplication
float multi(float a, float b){
    return a * b;
}

//function to find the remainder (modulo operations)
float modulo(float a, float b) {
    if (b != 0) {
        int quotient = static_cast<int>(a / b);
        return a - (b * quotient);
    } else {
        std::cout << "Modulo by zero!" << std::endl;
        return 0;
    }
}

//function to calculate a number raised to a power
float power(float base_variable, float exponent_variable){
    //exponential rules, if base has power of zero than the value will be one
    //declaring result as one to intialise for loop
    float result = 1.0;
    for (float i = 0; i < exponent_variable; i++){
        result = result * base_variable;
    }
    return result;
}

int main(){
    /*
    - declaring float variable number 1 and number 2
    - storing values inside those variables
    - calling function, which are mention above for mathematical operations
    - printing value on the screen
    */
   //number one and number two
    float num1 = 20;
    float num2 = 5;
    //calling function
    float addition_reuslt = add(num1, num2);
    float subtraction_result = sub(num1, num2);
    float division_result = div(num1, num2);
    float multiplication_result = multi(num1, num2);
    float modulo_result = modulo(num1, num2);
    float power_result = power(num1, num2);
    //printing result on screen
    std::cout << "Addition of two numbers is " << addition_reuslt << std::endl;
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