#include "Car.h" // Include the header file for the Car class

#include <string>
#include <iostream>
using namespace std;

// Constructor for the Car class
Car::Car(string userMake, string userModel, string userColor, int userMPG, double userMSRP, bool userSpare, bool userRearWiper) {
    Vehicle(userMake, userModel, userColor, userMPG, userMSRP); // Initialize the base class Vehicle
    spareInTrunk = userSpare;   // Set the spareInTrunk attribute
    rearWindshieldWiper = userRearWiper; // Set the rearWindshieldWiper attribute
}

// Setter for the spareInTrunk
void Car::SetSpareTrunk(bool userSpare) {
    spareInTrunk = userSpare;
}

// Setter for the rearWindshieldWiper
void Car::SetRearWiper(bool userRearWiper) {
    rearWindshieldWiper = userRearWiper;
}

// Getter for the spareInTrunk
bool Car::GetSpareTrunk() const {
    return spareInTrunk;
}

// Getter for the rearWindshieldWiper
bool Car::GetRearWiper() const {
    return rearWindshieldWiper;
}

// Method to print the car's description
void Car::PrintDescription() const {
    Vehicle::PrintDescription(); // Call the base class PrintDescription method
    cout << "Spare in Trunk: ";   // Print if there is a spare tire in the trunk
    if (spareInTrunk == true) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    cout << "Rear Windshield Wiper: "; // Print if there is a rear windshield wiper
    if (rearWindshieldWiper == true) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}
