#ifndef TRUCKH
#define TRUCKH

#include "Vehicle.h" // Include the header file for the Vehicle class
#include <string>
using namespace std;

// Class representing a truck, inheriting from the Vehicle class
class Truck : public Vehicle {
    private:
        // Private member variables to store truck-specific attributes
        bool sidePanelStorage;
        bool autoReleaseTailgate;
        
    public:
        // Constructor with default parameters
        Truck(string userMake = "noMake", string userModel = "noModel", 
            string userColor = "noColor", int userMPG = -1, double userMSRP = -1,
            bool userSidePanel = false, bool userReleaseTailgate = false);

        // Setter for sidePanelStorage
        void SetSidePanelStorage(bool userSidePanel);

        // Setter for autoReleaseTailgate
        void SetAutoReleaseTailgate(bool userReleaseTailgate);

        // Getter for sidePanelStorage
        bool GetSidePanelStorage() const;

        // Getter for autoReleaseTailgate
        bool GetAutoReleaseTailgate() const;

        // Method to print the truck's description
        void PrintDescription() const; 
};

#endif

