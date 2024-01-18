#include <iostream>
using namespace std;

int main() {
    int score;
    //variable score to store the users score
    //prompt the user to enter their score
    cout << "Enter your score: ";cin >> score;
    //score and store it in the score variable
    if (score >= 90) {
        //score is greater than or equal to 90
        cout << "Grade: A" << endl;
        //Grade A if the condition is true
    } else if (score >= 80) {
        //previous condition is false, check if the score is greater than or equal to 80
        cout << "Grade: B" << endl;
        //Grade B if this condition is true
    } else if (score >= 70) {
        //previous conditions are false, check if the score is greater than or equal to 70
        cout << "Grade: C" << endl;
        //Grade: C if this condition is true
    } else if (score >= 60) {
        //previous conditions are false, check if the score is greater than or equal to 60
        cout << "Grade: D" << endl;
        //Grade D if this condition is true
    } else {
        //none of the above conditions are true
        cout << "Grade: F" << endl;
        //Grade F as the default grade
    }

    return 0;
    //return 0 to indicate successful program execution
}

//******************************************************
// Author: Hemant Thapa
// Programming Language: C++
// Date Pushed to GitHub: 18.01.2024
// Email: hemantthapa1998@gmail.com
//******************************************************