//input/output stream library
#include <iostream>

int main() {
    //an integer variable day
    int day;
    //prompt the user to enter a day
    std::cout << "Enter a day of the week (1-7): ";
    //input from the user and store it in day
    std::cin >> day;
    //switch-case statement based on the value of day
    switch (day) {
        //case 1 corresponds to Sunday
        case 1:
            // Display Sunday
            std::cout << "Sunday" << std::endl;
            //exit the switch-case statement
            break;
        //case 2 corresponds to Monday
        case 2:
            //display Monday
            std::cout << "Monday" << std::endl;
            //exit the switch-case statement
            break;
        //case 3 corresponds to Tuesday
        case 3:
            //display Tuesday
            std::cout << "Tuesday" << std::endl;
            //exit the switch-case statement
            break;
        //case 4 corresponds to Wednesday
        case 4:
            //display Wednesday
            std::cout << "Wednesday" << std::endl;
            //exit the switch-case statement
            break;
        //case 5 corresponds to Thursday
        case 5:
            //display Thursday
            std::cout << "Thursday" << std::endl;
            //exit the switch-case statement
            break;
        //case 6 corresponds to Friday
        case 6:
            //display Friday
            std::cout << "Friday" << std::endl;
            //exit the switch-case statement
            break;
        //case 7 corresponds to Saturday
        case 7:
            //display Saturday
            std::cout << "Saturday" << std::endl;
            //exit the switch-case statement
            break;
        // Default case if 'day' doesn't match any of the cases
        default:
            //display Invalid day
            std::cout << "Invalid day" << std::endl;
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
