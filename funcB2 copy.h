
//-----------------------------SINGLE INHERITANCE--------------------
class Teacher
{
protected:
    int id;
    char name[20];
public:
    void getdata()
    {
        cout << "Enter Teacher ID: ";
        cin >> id;
        cout << "Enter Teacher Name: ";
        cin >> name;
    }
    void display();
};

void Teacher::display()
{
    cout << "\n--- Teacher Data ---" << endl;
    cout << "ID is: " << id << endl;
    cout << "Name is: " << name << endl;
}

class STU : public Teacher
{
protected:
    int rn;
    char sname[20];
public:
    void getdata()
    {
        Teacher::getdata();
        
        cout << "Enter Student Roll Number: ";
        cin >> rn;
        cout << "Enter Student Name: ";
        cin >> sname;
    }
    void display();
};

void STU::display()
{
    Teacher::display();
    
    cout << "\n--- Student Data ---" << endl;
    cout << "Roll Number is: " << rn << endl;
    cout << "Name is: " << sname << endl;
}

void functionB2()
{
    cleardevice (); //clearscren
    cout << "-------------------------SINGLE INHERITANCE----------------------------" << endl;
    
    STU s;
    
    s.getdata(); 
    
    s.display();
    
    getch();
}