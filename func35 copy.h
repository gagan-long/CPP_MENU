

//-------------------Function Definition Outside class------------

class Student
{
	private:
		int rn;
		char name[20];
	public :
		void Get();
		void display()
		{
			cout << "Roll NO.:" << rn << endl;
			cout << "Name:" << name << endl;
		}
};


void Student :: Get()
{

	cout << "Enter the roll no.: ";
	cin >> rn;
	cout << "Enter the name: ";
	cin >> name;
}

void function35()
{
    //data declaration
    cleardevice();
    cout << "-----------Function Definition Outside Class------------" << endl;

	
	Student S1;
	
	S1.Get();
	S1.display();
	
	 getch(); 
}

