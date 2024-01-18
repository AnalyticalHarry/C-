//include necessary header files
//for input and output operations
#include <iostream> 
//for time-related functions
#include <ctime>   
//using the standard namespace for convenience 
using namespace std; 


int main() {
    //obtain the current time as a timestamp (number of seconds since a specific date)
    time_t currentTime = time(nullptr);
    //convert the timestamp to a human-readable date and time structure
    tm currentDate = *localtime(&currentTime);

    //print the individual components of currentDate
    cout << "Current Date and Time:" << endl;
    //add 1900 to get the actual year
    cout << "Year: " << currentDate.tm_year + 1900 << endl; 
    //add 1 to get the actual month (0-based)
    cout << "Month: " << currentDate.tm_mon + 1 << endl;     
    cout << "Day: " << currentDate.tm_mday << endl;
    cout << "Hour: " << currentDate.tm_hour << endl;
    cout << "Minute: " << currentDate.tm_min << endl;
    cout << "Second: " << currentDate.tm_sec << endl;
    return 0;
}
