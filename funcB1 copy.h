//--------------------------String Overloading----------------------

class String
{
    private:
        char s[25];
    public:
        String(){strcpy(s,"");}
        String(char si[]){strcpy(s,si);}
        String operator +(String s1)
        {
            String t;
            strcpy(t.s, s);          
            strcat(t.s, s1.s);        
            return t;
        }
        void display()
        {
            cout<<s;
        }
};

void functionB1()
{
    cleardevice();
    cout<<"--------------------String Overloading----------------------"<<endl;
    String s, s1("Hello"), s2("World");
    s = s1 + s2;
    s.display(); 
    getch();
}