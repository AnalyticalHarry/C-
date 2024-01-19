#include <iostream>  
using namespace std;
//function will increase mass 5 times and acceleration 6 times for simulation
//30 simulation where mass changes 5 times in each scenarios
int main() {
    //variables to store acceleration and mass
    double acceleration, mass;  
    //prompt the user to enter acceleration
    //store the users input for acceleration
    cout << "Enter acceleration (m/s^2): "; cin >> acceleration;  

    //prompt the user to enter mass
    //store the users input for mass
    cout << "Enter mass (kg): "; cin >> mass;  
    cout << "Calculating force for different values of acceleration and mass:" << endl;  
    //outer loop to vary acceleration
    for (double a = acceleration; a <= acceleration + 10; a += 2) {
        //inner loop to vary mass
        for (double m = mass; m <= mass + 20; m += 5) {
            // force = mass * acceleration
            double force = m * a; 
            //display force along with acceleration and mass values
            cout << "Acceleration: " << a << " m/s^2, Mass: " << m << " kg, Force: " << force << " N" << endl;
        }
    }
    return 0;  
}
