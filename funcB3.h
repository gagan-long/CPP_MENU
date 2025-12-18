//-----------------------------Multiple inheritance program-----------------------


class Camera
{
protected:
    int pixels;
    char cameraCompanyName[30]; 

public:
    void inputCameraData()
    {
        cout << "--- Camera Specs ---" << endl;
        cout << "Enter Camera Sensor Pixels (MP): ";
        cin >> pixels;
        cout << "Enter Camera Company Name: ";
        cin >> cameraCompanyName;
    }

    void displayCameraData() 
    {
        cout << "    - Pixels: " << pixels << " MP" << endl;
        cout << "    - Camera Brand: " << cameraCompanyName << endl;
    }
};


class Phone
{
protected:
    char processor[30]; 
    int ramGB;

public:
    void inputPhoneData()
    {
        cout << "--- Phone Specs ---" << endl;
        cout << "Enter Processor Name: ";
        cin >> processor;
        cout << "Enter RAM Size (GB): ";
        cin >> ramGB;
    }

    void displayPhoneData() 
    {
        cout << "    - Processor: " << processor << endl;
        cout << "    - RAM: " << ramGB << " GB" << endl;
    }
};


class Smartphone : public Camera, public Phone
{
private:
    char brand[30];
    double price;

public:
    void inputData()
    {
        Camera::inputCameraData();
        Phone::inputPhoneData();

        cout << "------Enter Smartphone Details--------" << endl;
       
        cout << "Enter Smartphone Brand: ";
        cin >> brand;
        cout << "Enter Price ($): ";
        cin >> price;
    }

    void displayData() 
    {
        Camera::displayCameraData();
        Phone::displayPhoneData();

        cout << "---------Smartphone Details-----------" << endl;
      
        cout << "Brand: " << brand << endl;
        cout << "Price: $" << price << endl;
    }
};

void functionB3()
{
    cleardevice (); //clearscren
    cout<<"---------------------------Multiple inheritance program-----------------------"<<endl;

    Smartphone myPhone;

   
    myPhone.inputData();

    myPhone.displayData();

    getch();
}