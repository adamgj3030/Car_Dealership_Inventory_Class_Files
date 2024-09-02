#include "Truck.h" // Include the header file for the Truck class

#include <string>
#include <iostream>
using namespace std;

// Constructor for the Truck class
Truck::Truck(string userMake, string userModel, string userColor, int userMPG, double userMSRP, bool userSidePanel, bool userReleaseTailgate) {
    Vehicle(userMake, userModel, userColor, userMPG, userMSRP); // Initialize the base class Vehicle
    sidePanelStorage = userSidePanel; // Set the sidePanelStorage attribute
    autoReleaseTailgate = userReleaseTailgate; // Set the autoReleaseTailgate attribute
}

// Setter for the sidePanelStorage
void Truck::SetSidePanelStorage(bool userSidePanel) {
    sidePanelStorage = userSidePanel;
}

// Setter for the autoReleaseTailgate
void Truck::SetAutoReleaseTailgate(bool userReleaseTailgate) {
    autoReleaseTailgate = userReleaseTailgate;
}

// Getter for the sidePanelStorage
bool Truck::GetSidePanelStorage() const {
    return sidePanelStorage;
}

// Getter for the autoReleaseTailgate
bool Truck::GetAutoReleaseTailgate() const {
    return autoReleaseTailgate;
}

// Method to print the truck's description
void Truck::PrintDescription() const {
    Vehicle::PrintDescription(); // Call the base class PrintDescription method
    cout << "Side Panel Storage: "; // Print if there is side panel storage
    if (sidePanelStorage == true) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    cout << "Auto Release Tailgate: "; // Print if there is an auto-release tailgate
    if (autoReleaseTailgate == true) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}
