#include <iostream>
/*function to check positive and negative number
input parameter is list of number, which data types is list and length of list
*/
void positivNegativeNumber(float list[], int length){
    /*for loop to iterate inside list, initial index will be zero 
    and final will be less than length of list
    */
    for (int i = 0; i <= length; i++){
        //if list is greater than zero, return print for positive number
        if (list[i]>0){
            std::cout << "Number is positive : " << i << std::endl; 
        }
        //else if number is less then zero, return print for negative number
        else if(list[i] < 0){
            std::cout << "Number is negative : " << i << std::endl;
        }
        else{
        //else return number is zero
            std::cout <<"Number is zero : "<< i << std::endl;
        }
    } 
}

int main(){
    //list of floating point numbers
    float list [] = {-5, -4, -3, -2, -1, 0 , 1, 2, 3, 4, 5};
    //finding length of list
    int length = sizeof(list)/sizeof(list[0]);
    //calling function
    positivNegativeNumber(list, length);
    //return zero, if code is executed sucessfully
    return 0;
}

//******************************************************
// Author: Hemant Thapa
// Programming Language: C++
// Date Pushed to GitHub: 20.01.2024
// Email: hemantthapa1998@gmail.com
//******************************************************

