#include <iostream>

//function to perform the Bubble Sort algorithm
void bubbleSort(int arr[], int n) {
    //flag to track whether any elements were swapped in a pass
    bool swapped; 
    //outer loop for passes
    for (int i = 0; i < n - 1; i++) {
        //initialise swapped as false for this pass
        swapped = false; 
        //inner loop for comparisons and swapping
        for (int j = 0; j < n - i - 1; j++) {
            //current element is greater than the next element
            if (arr[j] > arr[j + 1]) {
                //swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                //swapped to true as elements were swapped
                swapped = true; 
            }
        }
        //no two elements were swapped in the inner loop, the array is already sorted
        if (!swapped) {
            //exit the outer loop early if no swaps were made
            break; 
        }
    }
}

int main() {
    //input array
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
    //calulate the size of array
    int n = sizeof(arr) / sizeof(arr[0]); 

    std::cout << "Original array: ";
    //original array
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    //bubbleSort function to sort the array
    bubbleSort(arr, n);
    std::cout << "Sorted array: ";
    //sorted array
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}

//******************************************************
// Author: Hemant Thapa
// Programming Language: C++
// Date Pushed to GitHub: 19.01.2024
// Email: hemantthapa1998@gmail.com
//******************************************************