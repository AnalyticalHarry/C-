#include <iostream>

int main() {
    //list of integers in an array
    int list[] = {1, 2, 3, 4, 5};
    //length of the array using the formula
    int length = sizeof(list) / sizeof(list[0]);
    //print the length to the console
    std::cout << "Length of the array: " << length << std::endl;
    //return zero to indicate successful execution
    return 0;
}

//******************************************************
// Author: Hemant Thapa
// Programming Language: C++
// Date Pushed to GitHub: 20.01.2024
// Email: hemantthapa1998@gmail.com
//******************************************************
