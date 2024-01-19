//input/output stream library
#include <iostream>

//enumeration Day to represent days of the week
enum Day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main() {  
    //variable today with the value wednesday from the day enumeration
    Day today = Wednesday;
    //switch-case statement based on the value of today
    switch (today) {
        //case Sunday corresponds to Sunday
        case Sunday:
            std::cout << "It's Sunday!" << std::endl;
            //exit switch-case statement
            break;

        //case Monday corresponds to Monday
        case Monday:
            std::cout << "It's Monday!" << std::endl;
            //exit the switch-case statement
            break;

        //case wednesday corresponds to Wednesday
        case Wednesday:
            std::cout << "It's Wednesday!" << std::endl;
            //exit the switch-case statement
            break;

        //default case if today doesn't match any of the cases
        default:
            //It's not Sunday, Monday, or Wednesday
            std::cout << "It's not Sunday, Monday, or Wednesday." << std::endl;
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