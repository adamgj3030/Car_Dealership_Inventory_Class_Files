#ifndef VEHICLEH
#define VEHICLEH

#include <string>
using namespace std;

// Class representing a vehicle
class Vehicle {
    private:
        // Private member variables to store vehicle attributes
        string make;
        string model;
        string color;
        int mpg;
        double msrp;

    public:
        // Constructor with default parameters
        Vehicle(string userMake = "noMake", string userModel = "noModel", 
                string userColor = "noColor", int userMPG = -1, double userMSRP = -1);

        // Setter for make
        void SetMake(string userMake);

        // Setter for model
        void SetModel(string userModel);

        // Setter for color
        void SetColor(string userColor);

        // Setter for mpg
        void SetMPG(int userMPG);

        // Setter for msrp
        void SetMSRP(double userMSRP);

        // Getter for make
        string GetMake() const;

        // Getter for model
        string GetModel() const;

        // Getter for color
        string GetColor() const;

        // Getter for mpg
        int GetMPG() const;

        // Getter for msrp
        double GetMSRP() const;

        // Method to print the vehicle description
        void PrintDescription() const;       
};

#endif
