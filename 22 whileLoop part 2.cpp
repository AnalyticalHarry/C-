//standard input/output stream library
#include <iostream>

// starting the main function
int main() {
    //initialising an integer variable sum with the value 0
    int sum = 0;
    //declairng integer variable number
    int number;
    //infinite while loop (loop will continue until a break statement is encountered)
    while (true) {
        //prompt to enter a number
        std::cout << "Enter a number (or 0 to exit): ";
        //standard input and store it in the variable number
        std::cin >> number;
        //checking if the entered number is equal to 0
        if (number == 0) {
            //exit the loop, it answer is yes
            break;
        }
        //sum of numbers
        sum += number;
    }
    //sum of entered numbers
    std::cout << "Sum of entered numbers: " << sum << std::endl;
    //successful program execution
    return 0;
}

//******************************************************
// Author: Hemant Thapa
// Programming Language: C++
// Date Pushed to GitHub: 19.01.2024
// Email: hemantthapa1998@gmail.com
//******************************************************
