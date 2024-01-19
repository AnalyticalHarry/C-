//standard input/output stream library
#include <iostream>

int main() {
    //intialising an integer variable rows with the value 5
    int rows = 5;
    // Declare and initialize an integer variable i with the value 1
    int i = 1;

    //while loop that runs as long as i is less than or equal to rows
    while (i <= rows) {
        //declare and initialising an integer variable j with the value 1
        int j = 1;
        //nested while loop that runs as long as j is less than or equal to i
        while (j <= i) {
            //output an asterisk followed by a space
            std::cout << "* ";
            //increment the value of j by 1
            j++;
        }
        //move to the next line after printing the pattern for the current row
        std::cout << std::endl;
        //increment the value of i by 1 to move to the next row
        i++;
    }
    //successful program execution
    return 0;
}

//******************************************************
// Author: Hemant Thapa
// Programming Language: C++
// Date Pushed to GitHub: 19.01.2024
// Email: hemantthapa1998@gmail.com
//******************************************************

