#include <iostream>
#include <string>
using namespace std;  

int main() {
    string message = "My name is Harry";  
    //a message indicating the following characters will be printed on separate lines
    cout << "Characters in the string (one per line):" << endl;  
    // Use a for loop to iterate through each character of the string on separate lines
    for (int i = 0; i < message.length(); i++) {
        //print each character of the string on a separate line
        cout << message[i] << endl;  
    }
    //return zero indicate program sucessfully indicate
    return 0;  
}
