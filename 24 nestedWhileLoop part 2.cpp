//standard input/output stream library
#include <iostream>

int main() {
    //integer variable i with the value 1
    int i = 1;
    //starting an outer while loop that runs as long as i is less than or equal to 10
    while (i <= 10) {
        //initialising an integer variable j with the value 1 for columns
        int j = 1;
        //starting an inner while loop that runs as long as j is less than or equal to 10
        while (j <= 10) {
            //output the multiplication of i and j along with formatting
            std::cout << i << " * " << j << " = " << i * j << "\t";
            // Increment the value of j by 1
            j++;
        }
        // move to the next line after printing the multiplication table for the current row
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

