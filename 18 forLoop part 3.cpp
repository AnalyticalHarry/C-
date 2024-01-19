#include <iostream>
using namespace std;

//******************************************************
// Author: Hemant Thapa
// Programming Language: C++
// Date Pushed to GitHub: 19.01.2024
// Email: hemantthapa1998@gmail.com
//******************************************************

//print even number from 0 to 20
int main() {
    cout << "Even numbers from 0 to 20:" << endl;
    //for loop to print number from 0 to 20, where number should be even
    for (int i = 0; i <= 20; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
