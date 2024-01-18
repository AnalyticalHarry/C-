//header files for input and output operations
#include <iostream>
//time-related functions
#include <ctime>
//standard namespace for convenience
using namespace std;

//creating function age calculation
int ageCalculator(int birthYear, int birthMonth, int birthDay) {
    //obtain the current time as a timestamp (number of seconds since a specific date)
    time_t currentTime = time(nullptr);
    
    //convert the timestamp to a human-readable date and time structure
    tm currentDate = *localtime(&currentTime);

    //age by subtracting the birth year from the current year
    int age = currentDate.tm_year + 1900 - birthYear;

    //adjust the age if the birth month and day have not occurred yet this year
    if (birthMonth > (currentDate.tm_mon + 1) || 
        (birthMonth == (currentDate.tm_mon + 1) && birthDay > currentDate.tm_mday)) {
        age--;
    }

    //return the calculated age
    return age;
}

int main() {
    int birthYear, birthMonth, birthDay;

    //prompt the user to enter their birth year
    cout << "enter your birth year: ";
    cin >> birthYear;

    //prompt the user to enter their birth month (1-12)
    cout << "enter your birth month (1-12): ";
    cin >> birthMonth;

    //prompt the user to enter their birth day
    cout << "enter your birth day: ";
    cin >> birthDay;

    //call the ageCalculator function and display the calculated age
    int age = ageCalculator(birthYear, birthMonth, birthDay);
    cout << "your age is: " << age << " years old." << endl;

    return 0;
}
