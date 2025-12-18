//-------------------- operator overloding(IN BINARY)----------------------



class COMX
{
private:
    int real, img;

public:
    COMX(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    COMX operator+(const COMX &obj) // pass obj by reference
    {
        COMX temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return temp;
    }

    void display()
    {
        cout << "real = " << real << " img = " << img << endl;
    }
};

void function39()
{
    cleardevice(); //clearscren
    cout<<" --------------------------operator overloding(IN BINARY)--------------------"<<endl;
    COMX c1(1, 2), c2(3, 4);
    COMX c3 = c1 + c2;
    c3.display();
    getch();
}


