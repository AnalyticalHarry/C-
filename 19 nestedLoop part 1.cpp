#include <iostream>
using namespace std;

//nested Loop for printing a Triangle
int main() {
    //an integer variable n to store the number of rows
    int n;  
    //prompt the user to enter the number of rows
    cout << "Enter the number of rows: ";  cin >> n;  
    //message indicating that a triangle will be printed
    cout << "Printing a triangle:" << endl;  
    //outer loop to iterate through each row of the triangle
    for (int i = 1; i <= n; i++) {
        //inner loop to print * characters for each row
        for (int j = 1; j <= i; j++) {
            //* character followed by a space
            cout << "* ";  
        }
        //move to the next line after printing each row of * characters
        cout << endl;  
    }
    return 0;  
}
