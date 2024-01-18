//iostream library, which provides input and output functionality
#include <iostream>
//iomanip library, which provides formatting manipulators like setw
#include <iomanip>
//string library, which provides string-related operations and data types
#include <string>
//standard namespace (std) for convenience, allowing us to use 
//standard C++ functions and objects without prefixing them with 'std::'
using namespace std;


int main() {
    string firstName, lastName, email, address, phoneNumberStr;
    int age;
    long long phoneNumber;

    //user input
    //first name
    cout << "Enter First Name: ";cin >> firstName;
    //last name
    cout << "Enter Last Name: ";cin >> lastName;
    //age
    cout << "Enter Age: ";cin >> age;
    //email address
    cout << "Enter Email: ";cin >> email;
    //clear input buffer
    cin.ignore(); 
    //phone number
    cout << "Enter Phone Number: "; 
    getline(cin, phoneNumberStr);
    //convert phoneNumberStr to a long long integer
    try {
        phoneNumber = stoll(phoneNumberStr);
    } catch (const std::invalid_argument&) {
        cout << "Invalid phone number format.\n";
        return 1; // Exit with an error code
    } catch (const std::out_of_range&) {
        cout << "Phone number is too large.\n";
        return 1; // Exit with an error code
    }
    //address
    cout << "Enter Address: ";
    getline(cin, address);
    //output with foprmating
    cout << "\n**** User Information ****\n";
    cout << setw(15) << "First Name:" << setw(15) << firstName << endl;
    cout << setw(15) << "Last Name:" << setw(15) << lastName << endl;
    cout << setw(15) << "Age:" << setw(15) << age << endl;
    cout << setw(15) << "Email:" << setw(15) << email << endl;
    cout << setw(15) << "Phone Number:" << setw(15) << phoneNumber << endl;
    cout << setw(15) << "Address:" << setw(15) << address << endl;
    return 0;
}


//******************************************************
// Author: Hemant Thapa
// Programming Language: C++
// Date Pushed to GitHub: 18.01.2024
//******************************************************
