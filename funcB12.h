// verual function

class Base{

public:

virtual void Output(){

cout << "Output Base class" << endl;

}

void Display(){

cout << "Display Base class" << endl;

}

};

class Derived : public Base{

public:

void Output(){

cout << "Output Derived class" << endl;

}

void Display()

{

cout << "Display Derived class" << endl;

}

};

int functionB12(){

Base* bpointr;

Derived dpointr;

bpointr = &dpointr;

// virtual function binding

bpointr->Output();

// Non-virtual function binding

bpointr->Display();

}