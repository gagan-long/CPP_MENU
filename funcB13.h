// pure vertual function example
class vertualFunc{

public:

virtual void Output() =0;

void Display(){

cout << "Display Base class" << endl;

}

};

class Derivedfunc : public vertualFunc{

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

vertualFunc* bpointr;

Derivedfunc dpointr;

bpointr = &dpointr;

// virtual function binding

bpointr->Output();

// Non-virtual function binding

bpointr->Display();

}