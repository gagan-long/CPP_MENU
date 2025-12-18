//-----------------------operator over loding using friend function-----------------------------

class COUNTER
{
private:
    int c;

public:
    COUNTER() { c = 0; }
    COUNTER(int ci) { c = ci; }

    friend COUNTER operator++(COUNTER &obj);   // prefix ++
    friend COUNTER operator++(COUNTER &obj, int); // postfix ++

    void display()
    {
        cout << "Counter " << c << endl;
    }
};

// Prefix ++ operator (increments and returns updated object)
COUNTER operator++(COUNTER &obj)
{
    obj.c = obj.c + 1;
    return obj;
}

// Postfix ++ operator (returns original object, increments after)
COUNTER operator++(COUNTER &obj, int)
{
    COUNTER t = obj;
    obj.c = obj.c + 1;
    return t;
}

void function40()
{
    cleardevice(); // cleardevice
    cout<<"-----------------------operator over loding using friend function-----------------------------"<<endl;
    COUNTER c, c1, c2;
    c2 = c++;   // postfix
    c1 = ++c;   // prefix

    c2.display();
    c1.display(); 
     getch();
   
}


