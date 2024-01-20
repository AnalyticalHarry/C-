#include <iostream>

//function to caclulate even numbers
void findEvenNumber(int arr[], int length) {
    //for loop to iterate over length of array
    for (int i = 0; i < length; i++) {
        //checking if number is even 
        if (arr[i] % 2 == 0) {
            //printing result on screen
            std::cout << arr[i] << " is even." << std::endl;
            //if number is not even
        } else {
            std::cout << arr[i] << " is not even." << std::endl;
        }
    }
}

int main() {
    //list of array
    int arr[] = {1, 2, 3, 4, 5, 6};
    //length of array
    int length = sizeof(arr) / sizeof(arr[0]);
    //finding even number
    findEvenNumber(arr, length);
    return 0;
}

//******************************************************
// Author: Hemant Thapa
// Programming Language: C++
// Date Pushed to GitHub: 20.01.2024
// Email: hemantthapa1998@gmail.com
//******************************************************
