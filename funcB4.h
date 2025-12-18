//----------------------Multileveal inharetance-------------------

class TEACHER
{
        protected:
                    int id;
                    char Tname[30];
        public:
                void get()
                {
                        cout<<"Enter id of Teacher :";
                        cin>>id;
                        cout<<"Enter name of Teacher :";
                        cin>>Tname;
                }
                void display()
                {
                        cout<<"Teacher Name is:"<<Tname<<endl;
                        cout<<"Teacher ID is :"<<id<<endl;
                }

};
class std : public TEACHER
{
        protected :
                    int rn;
                    char name[20];
        public:
                    void get()
                    {
                            TEACHER:: get();
                            cout<<"Enter Roll Number "<<endl;
                            cin>>rn;
                            cout<<"Enter Name :"<<endl;
                            cin>>name;
                    }       
                    void display()
                    {
                            TEACHER::display();
                            cout<<"Roll Number :"<<rn<<endl;
                            cout<<"name:"<<name<<endl;
                    }
};
class mark: public std
{
        protected:
                int mark;
        public:
                void get()
                {
                        std:: get();
                        cout<<"Enter marks of student:"<<endl;
                        cin>>mark;
                }
                void display()
                {
                        std :: display();
                        cout<<"Marks is :"<<mark<<endl;
                }
};

void functionB4()
{
        cleardevice(); // cleardevice
        cout<<"---------------------Multileveal inharetance-------------------"<<endl;
        mark m;
        m.get();
        m.display();
        getch();
}