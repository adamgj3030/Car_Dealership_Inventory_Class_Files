# Car-Dealership-Inventory-Class-Files
C++ Class and Test Files for a Car Dealership Inventory


class Vehicle:
Must have these private data members:
- string make
- string model
- string color
- integer mpg
- double msrp

Must have these public member functions:
- Vehicle(string userMake = "noMake", string userModel = "noModel", string userColor = "noColor", int userMPG = -1, double userMSRP = -1): 
- Initializes the make, model, color, MPG, and MSRP for a vehicle class.
- void SetMake(string userMake): 
- Set the vehicle make to the provided parameter userMake.
- void SetModel(string userModel): 
- Set the vehicle model to the provided parameter userModel.
- void SetColor(string userColor): 
- Set the vehicle color to the provided parameter userColor.
- void SetMPG(int userMPG): 
- Set the vehicle MPG to the provided parameter userMPG.
- void SetMSRP(double userMSRP): 
- Set the vehicle MSRP to the provided parameter userMSRP.
- string GetMake() const: 
- return the vehicle make.
- string GetModel() const: 
- return the vehicle model.
- string GetColor() const: 
- return the vehicle color.
- int GetMPG() const: 
- return the vehicle MPG.
- double GetMSRP() const: 
- return the vehicle MSRP.


class Car using derived class Vehicle:
- Must have these private data members
- Boolean spareInTrunk
- Boolean rearWindshieldWiper

Must have these public member functions:
- Car(bool userSpare = false, bool userRearWiper = false):
- Initializes the spareInTrunk and rearWindShieldWiper for a Car class.
- void SetSpareTrunk(bool userSpare): 
- Set the car spareInTrunk to the provided parameter userSpare.
- void SetRearWiper(bool userRearWiper):
- Set the car rearWindshieldWiper to the provided parameter userRearWiper.
- bool GetSpareTrunk() const: 
- return the car spareInTrunk.
- bool GetRearWiper() const: 
- return the car rearWindshieldWiper.


class Truck using derived class Vehicle:
- Must have these private data members
- Boolean sidePanelStorage
- Boolean autoReleaseTailgate

Must have these public member functions:
- Truck(bool userSidePanel = false, bool userReleaseTailgate = false):
- Initializes the sidePanelStorage and autoReleaseTailgate for a Truck class.
- void SetSidePanelStorage(bool userSidePanel): 
- Set the truck sidePanelStorage to the provided parameter userSidePanel.
- void SetAutoReleaseTailgate(bool userReleaseTailgate):
- Set the truck autoReleaseTailgate to the provided parameter userReleaseTailgate.
- bool GetSidePanelStorage() const: 
- return the truck sidePanelStorage.
- bool GetAutoReleaseTailgate() const: 
- return the truck autoReleaseTailgate
