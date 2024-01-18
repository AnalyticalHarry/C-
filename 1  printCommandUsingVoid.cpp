//include the input/output stream library.
#include <iostream> 

//define a void function called showMessage.
//this function prints a message to the console.
void showMessage() {
    std::cout << "Hello, world!" << std::endl; 
}
//main function is the entry point of the program.
int main() { 
    //calling the showMessage function to display the message.
    showMessage(); 
    //return 0 to indicate successful program execution to the operating system.
    return 0; 
}
