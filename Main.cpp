#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Set initial values for Vehicle Class
    string currMake = "Toyota";
    string currModel = "Camry";
    string currColor = "Red";
    int currMPG = 30;
    double currMSRP = 24000.00;

    cout << "Beginning Tests." << endl;

    // Create object testVehicle of class Vehicle
    Vehicle testVehicle(currMake, currModel, currColor, currMPG, currMSRP);

    // Check get make
    if (testVehicle.GetMake() != currMake) {
        cout << "   FAILED get make" << endl;
    }

    // Check get model
    if (testVehicle.GetModel() != currModel) {
        cout << "   FAILED get model" << endl;
    }

    // Check get color
    if (testVehicle.GetColor() != currColor) {
        cout << "   FAILED get color" << endl;
    }

    // Check get MPG
    if (testVehicle.GetMPG() != currMPG) {
        cout << "   FAILED get MPG" << endl;
    }

    // Check get MSRP
    if (testVehicle.GetMSRP() != currMSRP) {
        cout << "   FAILED get MSRP" << endl;
    }

    // Check set make
    testVehicle.SetMake("Honda");
    if (testVehicle.GetMake() != "Honda") {
        cout << "   FAILED set make" << endl;
    }

    // Check set model
    testVehicle.SetModel("Civic");
    if (testVehicle.GetModel() != "Civic") {
        cout << "   FAILED set model" << endl;
    }

    // Check set color
    testVehicle.SetColor("Blue");
    if (testVehicle.GetColor() != "Blue") {
        cout << "   FAILED set color" << endl;
    }

    // Check set MPG
    testVehicle.SetMPG(35);
    if (testVehicle.GetMPG() != 35) {
        cout << "   FAILED set MPG" << endl;
    }

    // Check set MSRP
    testVehicle.SetMSRP(22000.00);
    if (testVehicle.GetMSRP() != 22000.00) {
        cout << "   FAILED set MSRP" << endl;
    }

    // Testing Car class
    Car testCar("Honda", "Civic", "Blue", 35, 22000.00, true, false);

    // Check get spareInTrunk
    if (!testCar.GetSpareTrunk()) {
        cout << "   FAILED get spareInTrunk" << endl;
    }

    // Check get rearWindshieldWiper
    if (testCar.GetRearWiper()) {
        cout << "   FAILED get rearWindshieldWiper" << endl;
    }

    // Check set spareInTrunk
    testCar.SetSpareTrunk(false);
    if (testCar.GetSpareTrunk()) {
        cout << "   FAILED set spareInTrunk" << endl;
    }

    // Check set rearWindshieldWiper
    testCar.SetRearWiper(true);
    if (!testCar.GetRearWiper()) {
        cout << "   FAILED set rearWindshieldWiper" << endl;
    }

    // Testing Truck class
    Truck testTruck("Ford", "F-150", "Black", 20, 30000.00, true, true);

    // Check get sidePanelStorage
    if (!testTruck.GetSidePanelStorage()) {
        cout << "   FAILED get sidePanelStorage" << endl;
    }

    // Check get autoReleaseTailgate
    if (!testTruck.GetAutoReleaseTailgate()) {
        cout << "   FAILED get autoReleaseTailgate" << endl;
    }

    // Check set sidePanelStorage
    testTruck.SetSidePanelStorage(false);
    if (testTruck.GetSidePanelStorage()) {
        cout << "   FAILED set sidePanelStorage" << endl;
    }

    // Check set autoReleaseTailgate
    testTruck.SetAutoReleaseTailgate(false);
    if (testTruck.GetAutoReleaseTailgate()) {
        cout << "   FAILED set autoReleaseTailgate" << endl;
    }

    cout << "Tests complete." << endl;

    return 0;
}
