#include <iostream>
//iomanip header for setprecision
#include <iomanip> 
//cmath header for mathematical functions
#include <cmath>   
using namespace std;

int main() {
    //value of pi
    const double pi = 3.14159265358979323846; 
    //prompt the user for the radius of the circle
    double radius;
    cout << "Enter the radius of the circle: "; cin >> radius;
    //area of the circle
    double area = pi * pow(radius, 2);
    //circumference (perimeter) of the circle
    double circumference = 2 * pi * radius;
    //results with precision set to 2 decimal places
    //set precision to 4 decimal places
    cout << fixed << setprecision(4); 
    cout << "The area of the circle with radius " << radius << " is: " << area << endl;
    cout << "The circumference of the circle with radius " << radius << " is: " << circumference << endl;
    return 0;
}

//******************************************************
// Author: Hemant Thapa
// Programming Language: C++
// Date Pushed to GitHub: 18.01.2024
// Email: hemantthapa1998@gmail.com
//******************************************************