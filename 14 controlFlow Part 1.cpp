#include <iostream> 
using namespace std; 

int main() { 
    //declare a variable to store the operator (+, -, *, /)
    char operation; 
    //declare variables to store two numbers
    double num1, num2; 
    //prompt the user to enter an operator
    cout << "Enter an operator (+, -, *, /): "; 
    cin >> operation;
    //prompt the user to enter two numbers
    cout << "Enter number 1: "; cin >> num1;
    cout << "Enter number 2: "; cin >> num2; 
    //Check the operator and perform the corresponding operation
    //if operations
    if (operation == '+') {
        //addition of two numbers
        double result = num1 + num2; 
        cout << "Result: " << result << endl;
    //else if 
    } else if (operation == '-') {
        //subtraction of two numbers
        double result = num1 - num2; 
        cout << "Result: " << result << endl; 
    //else if
    } else if (operation == '*') {
        //multiplication of two numbers
        double result = num1 * num2; 
        cout << "Result: " << result << endl; 
    //else if
    } else if (operation == '/') {
        //checking number 2 is zero, just making sure no zero division error
        if (num2 != 0) {
            //division of two numbers
            double result = num1 / num2; 
            cout << "Result: " << result << endl; 
        } else {
            //error message
            cout << "Division by zero is not allowed." << endl; 
        }
    //else
    } else {
        cout << "Invalid operator." << endl; 
    }
    return 0; 
}

//******************************************************
// Author: Hemant Thapa
// Programming Language: C++
// Date Pushed to GitHub: 18.01.2024
// Email: hemantthapa1998@gmail.com
//******************************************************