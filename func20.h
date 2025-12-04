
// function 20 Various format (table start and end ) Pyramid , Calendar

void function20()
{
	cleardevice();
    int rows = 5;
    for (int i = 1; i <= rows; ++i) {
        // print leading spaces
        for (int j = i; j < rows; ++j)
            cout << "  ";
        // print increasing numbers
        for (int k = 1; k <= i; ++k)
            cout << k << " ";
        cout << endl;
    }
    getch();
}