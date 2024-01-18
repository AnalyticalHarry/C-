//include necessary C++ standard libraries
//input and output stream
#include <iostream> 
//math library for mathematical functions
#include <cmath>  
//include the iomanip header for formatting  
#include <iomanip>  
//standard namespace to avoid writing std:: in front of C++ standard objects
using namespace std;

//function hypotenuse, which calculate hypotenuse value
double hypotenuse(double perpendicular, double base) {
    return sqrt(perpendicular * perpendicular + base * base);
}

//function perpendicular, which calculate perpendicular value
double calculatePerpendicular(double hypotenuse, double base) {
    return sqrt(hypotenuse * hypotenuse - base * base);
}

//function base, which calculate base value
double calculateBase(double hypotenuse, double perpendicular) {
    return sqrt(hypotenuse * hypotenuse - perpendicular * perpendicular);
}

//main function where the program starts execution
int main() {
    //variable to store the result
    double result;  
    //variable to store the users choice of solution type      
    string calculation_type; 

    //prompt the user to choose a calculation type (hypotenuse, perpendicular, or base)
    cout << "What do you want to calculate? (hypotenuse/perpendicular/base): ";
    cin >> calculation_type; // Read the user's input into calculation_type

    //calculation the user wants to perform
    if (calculation_type == "hypotenuse") { 
        double perpendicular, base; 
        cout << "Enter the length of the perpendicular (a): "; 
        
        //input is not a valid number or is less than or equal to 0
        if (!(cin >> perpendicular) || perpendicular <= 0) {
            //error message
            cout << "Invalid input. Length must be a positive number." << endl; 
            //return error code
            return 1;
        }
        
        cout << "Enter the length of the base (b): "; 
        
        //input is not a valid number or is less than or equal to 0
        if (!(cin >> base) || base <= 0) {
            //error message
            cout << "Invalid input. Length must be a positive number." << endl; 
            //return error code
            return 1; 
        }
        
        //hypotenuse using the hypotenuse function
        result = hypotenuse(perpendicular, base);
        cout << "The length of the hypotenuse (c) is: ";
        cout << fixed << setprecision(2) << setw(10) << result << endl;

    } else if (calculation_type == "perpendicular") {
        double hypotenuseValue, base; 
        cout << "Enter the length of the hypotenuse (c): "; 
        
        //input is not a valid number or is less than or equal to 0
        if (!(cin >> hypotenuseValue) || hypotenuseValue <= 0) {
            //error message
            cout << "Invalid input. Length must be a positive number." << endl; 
            //return an error code
            return 1; 
        }
        
        cout << "Enter the length of the base (b): "; 
        
        //input is not a valid number or is less than or equal to 0
        if (!(cin >> base) || base <= 0) {
            cout << "Invalid input. Length must be a positive number." << endl;
            //return an error code
            return 1;
        }
        
        //if the hypotenuse is greater than or equal to the base
        if (hypotenuseValue >= base) {
            //perpendicular using the calculatePerpendicular function
            result = calculatePerpendicular(hypotenuseValue, base);
            cout << "The length of the perpendicular (a) is: "; 
            cout << fixed << setprecision(2) << setw(10) << result << endl; 
        } else {
            cout << "Invalid input. Hypotenuse must be greater than or equal to the base." << endl; 
        }

    } else if (calculation_type == "base") { 
        double hypotenuseValue, perpendicular; 
        cout << "Enter the length of the hypotenuse (c): "; 
        
        //input is not a valid number or is less than or equal to 0
        if (!(cin >> hypotenuseValue) || hypotenuseValue <= 0) {
            cout << "Invalid input. Length must be a positive number." << endl; 
            //return an error code
            return 1; 
        }
        
        cout << "Enter the length of the perpendicular (a): "; 
        
        //input is not a valid number or is less than or equal to 0
        if (!(cin >> perpendicular) || perpendicular <= 0) {
            cout << "Invalid input. Length must be a positive number." << endl; 
            //return an error code
            return 1; 
        }
        
        //hypotenuse is greater than or equal to the perpendicular
        if (hypotenuseValue >= perpendicular) {
            //base using the calculateBase function
            result = calculateBase(hypotenuseValue, perpendicular);
            cout << "The length of the base (b) is: "; 
            cout << fixed << setprecision(2) << setw(10) << result << endl; 
        } else {
            cout << "Invalid input. Hypotenuse must be greater than or equal to the perpendicular." << endl;
        }
    } else {
        cout << "Invalid input. Please specify 'hypotenuse', 'perpendicular', or 'base' for calculation." << endl; 
    }
    //return 0 to indicate successful program execution
    return 0; 
}

//******************************************************
// Author: Hemant Thapa
// Programming Language: C++
// Date Pushed to GitHub: 18.01.2024
// Email: hemantthapa1998@gmail.com
//******************************************************