//input/output stream library
#include <iostream>

int main() {
    //n to 2, the first prime number
    int n = 2;
    //while loop to check numbers from 2 to 50
    while (n <= 50) {
        //i to 2, the smallest prime divisor
        int i = 2;
        //boolean flag as true
        bool isPrime = true;
        //while loop to check divisors from 2 to n/2
        while (i <= n / 2) {
            //n is divisible by i without a remainder
            if (n % i == 0) {
                //set isPrime flag to false
                isPrime = false;
                //exit the inner loop, as n is not prime
                break;
            }
            //increment i to check the next divisor
            i++;
        }
        //if isPrime flag is still true
        if (isPrime) {
            // If yes, then n is prime, so output it
            std::cout << n << " is prime." << std::endl;
        }
        //increment n to check the next number
        n++;
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
