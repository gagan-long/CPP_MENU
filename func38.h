//---------------OPERATOR OVERLODING (unary)-----------------



class counter {
    private:
        int c;
    public:
        counter() { c = 0; }
        counter(int ci) { c = ci; }

        // Prefix ++ overload
        counter operator++() {
            counter t;
            t.c = ++c;
            return t;
        }

        // Postfix ++ overload
        counter operator++(int) {
            counter t;
            t.c = c++;
            return t;  // Must return the temporary object
        }

        void display() {
            cout << "counter = " << c << endl;
        }
};

void function38() {
    cleardevice(); // clearscrean
    cout << "----------------operator overloading (unary)--------------------------" << endl;
    counter c, c1, c2;
    c2 = c++;
    c1 = ++c;
    c1.display();
    c2.display();
    getch();
}


