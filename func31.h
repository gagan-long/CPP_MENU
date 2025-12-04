//-------------1-ONE, 123456 ONN TWO THREE FOUR FIVE SIX------------------

void digitToWord(char digit) {
    switch(digit) {
        case '0': cout << "ZERO "; break;
        case '1': cout << "ONE "; break;
        case '2': cout << "TWO "; break;
        case '3': cout << "THREE "; break;
        case '4': cout << "FOUR "; break;
        case '5': cout << "FIVE "; break;
        case '6': cout << "SIX "; break;
        case '7': cout << "SEVEN "; break;
        case '8': cout << "EIGHT "; break;
        case '9': cout << "NINE "; break;
    }
}

void function31() {
    cleardevice();
    cout<<"------------1-ONE, 123456 ONN TWO THREE FOUR FIVE SIX------------------"<<endl;
    char number[100];
    
    cout << "Enter a number: ";
    cin >> number;
    
    cout << "Output: ";
    for(int i = 0; number[i] != '\0'; i++) {
        digitToWord(number[i]);
    }
    cout << endl;
    
    getch(); 
}