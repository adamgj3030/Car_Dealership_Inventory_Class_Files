#include "Vehicle.h" // Include the header file for the Vehicle class

#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

// Constructor for the Vehicle class
Vehicle::Vehicle(string userMake, string userModel, string userColor, int userMPG, double userMSRP) {
    make = userMake;   // Set the make of the vehicle
    model = userModel; // Set the model of the vehicle
    color = userColor; // Set the color of the vehicle
    mpg = userMPG;     // Set the miles per gallon of the vehicle
    msrp = userMSRP;   // Set the manufacturer's suggested retail price
}

// Setter for the make
void Vehicle::SetMake(string userMake) {
    make = userMake;
}

// Setter for the model
void Vehicle::SetModel(string userModel) {
    model = userModel;
}

// Setter for the color
void Vehicle::SetColor(string userColor) {
    color = userColor;
}

// Setter for the mpg
void Vehicle::SetMPG(int userMPG) {
    mpg = userMPG;
}

// Setter for the msrp
void Vehicle::SetMSRP(double userMSRP) {
    msrp = userMSRP;
}

// Getter for the make
string Vehicle::GetMake() const {
    return make;
}

// Getter for the model
string Vehicle::GetModel() const {
    return model;
}

// Getter for the color
string Vehicle::GetColor() const {
    return color;
}

// Getter for the mpg
int Vehicle::GetMPG() const {
    return mpg;
}

// Getter for the msrp
double Vehicle::GetMSRP() const {
    return msrp;
}    

// Method to print the vehicle's description
void Vehicle::PrintDescription() const {
    cout << "Make: " << make << endl;       // Print the make
    cout << "Model: " << model << endl;     // Print the model
    cout << "Color: " << color << endl;     // Print the color
    cout << "MPG: " << mpg << endl;         // Print the miles per gallon
    cout << fixed << setprecision(2);       // Set the output format for the MSRP
    cout << "MSRP: " << msrp << endl;       // Print the manufacturer's suggested retail price
}

