//---------------- HIERARCHICAL INHERITANCE ----------------"

class Vehicle
{
protected:
    char name[30];
    int wheel;

public:
    void inputVehicleData()
    {
        cout << "Enter Vehicle Name : ";
        cin >> name;
        cout << "Enter Number of Wheels: ";
        cin >> wheel;
    }

    void displayVehicleData() 
    {
        cout << "Vehicle Base Data" << endl;
        cout << "  Name: " << name << endl;
        cout << "  Wheels: " << wheel << endl;
    }
};



class LightMotor : public Vehicle
{
protected:
    int speedLimit;

public:
    void inputLightMotorData()
    {
        Vehicle ::inputVehicleData();
        cout << "\n--- Light Motor Specs ---" << endl;
        cout << "Enter Speed Limit (km/h): ";
        cin >> speedLimit;
    }

    void displayLightMotorData() 
    {
        Vehicle ::displayVehicleData();
        cout << "Light Motor Data" << endl;
        cout << "  Speed Limit: " << speedLimit << " km/h" << endl;
    }
};

class HeavyMotor : public Vehicle
{
protected:
    int capacity;
    char permit[30];

public:
    void inputHeavyMotorData()
    {
        Vehicle::inputVehicleData();
        cout << "\n--- Heavy Motor Specs ---" << endl;
        cout << "Enter Capacity (kg/passengers): ";
        cin >> capacity;
        cout << "Enter Permit Type : ";
        cin >> permit;
    }

    void displayHeavyMotorData() 
    {
        Vehicle::displayVehicleData();
        cout << "Heavy Motor Data" << endl;
        cout << "  Capacity: " << capacity << endl;
        cout << "  Permit: " << permit << endl;
    }
};



// Derived from LightMotor
class GearMotor : public LightMotor
{
private:
    int gearCount;

public:
    void inputData()
    {
        LightMotor::inputLightMotorData();
        cout << "\n--- Gear Motor Specifics ---" << endl;
        cout << "Enter Number of Gears: ";
        cin >> gearCount;
    }

    void displayData() 
    {
      
        cout << "--------GEAR MOTOR VEHICLE-----" << endl;
     
       LightMotor::displayLightMotorData();
        cout << "Gear Motor Data" << endl;
        cout << "  Gear Count: " << gearCount << endl;
     
    }
};

// Derived from LightMotor
class NonGear : public LightMotor
{
private:
    char automatic[20]; 

public:
    void inputData()
    {
       LightMotor::inputLightMotorData();
        cout << "\n--- Non-Gear Specifics ---" << endl;
        cout << "Is the transmission fully Automatic: ";
        cin >> automatic;
    }

    void displayData() 
    {
       
        cout << " ------------- NON-GEAR MOTOR VEHICLE-------------" << endl;
      
        LightMotor::displayLightMotorData();
        cout << "Non-Gear Data" << endl;
        cout << "  Transmission: " << automatic  << endl;
      
    }
};

// Derived from HeavyMotor
class Passenger : public HeavyMotor
{
private:
    int sitting;
    int standing;

public:
    void inputData()
    {
        HeavyMotor::inputHeavyMotorData();
        cout << "--- Passenger Vehicle Specifics---" << endl;
        cout << "Enter Max Sitting Capacity: ";
        cin >> sitting;
        cout << "Enter Max Standing Capacity: ";
        cin >> standing;
    }

    void displayData() 
    {
      
        cout << " ------------- PASSENGER VEHICLE------------------" << endl;
       
        HeavyMotor::displayHeavyMotorData();
        cout << "Passenger Data" << endl;
        cout << "  Sitting Capacity: " << sitting << endl;
        cout << "  Standing Capacity: " << standing << endl;
        cout << "  Total Capacity: " << sitting + standing << endl;
       
    }
};

// Derived from HeavyMotor
class Goods : public HeavyMotor
{
private:
    char loadType[40];

public:
    void inputData()
    {
       HeavyMotor:: inputHeavyMotorData();
        cout << "\n--- Goods Vehicle Specifics---" << endl;
        cout << "Enter Primary Load Type : ";
        cin >> loadType;
    }

    void displayData() 
    {
       
        cout << " -----------------GOODS VEHICLE-------------------" << endl;
        
       HeavyMotor:: displayHeavyMotorData();
        cout << "Goods Data" << endl;
        cout << "  Load Type: " << loadType << endl;
      
    }
};


void functionB5()
{
    
    cleardevice(); // cleardevice
    cout << "---------------- HIERARCHICAL INHERITANCE ----------------" << endl;

   
    GearMotor car;
    car.inputData();
    car.displayData();

    Passenger bus;
    bus.inputData();
    bus.displayData();

   
    Goods lorry;
    lorry.inputData();
    lorry.displayData();
    
  
    NonGear scooter;
    scooter.inputData();
    scooter.displayData();

 getch();
}