#ifndef CARH
#define CARH

#include "Vehicle.h" // Include the header file for the Vehicle class
#include <string>
using namespace std;

// Class representing a car, inheriting from the Vehicle class
class Car : public Vehicle {
    private:
        // Private member variables to store car-specific attributes
        bool spareInTrunk;
        bool rearWindshieldWiper;

    public:
        // Constructor with default parameters
        Car(string userMake = "noMake", string userModel = "noModel", 
            string userColor = "noColor", int userMPG = -1, double userMSRP = -1,
            bool userSpare = false, bool userRearWiper = false);

        // Setter for spareInTrunk
        void SetSpareTrunk(bool userSpare);

        // Setter for rearWindshieldWiper
        void SetRearWiper(bool userRearWiper);

        // Getter for spareInTrunk
        bool GetSpareTrunk() const;

        // Getter for rearWindshieldWiper
        bool GetRearWiper() const;

        // Method to print the car's description
        void PrintDescription() const; 
};

#endif
