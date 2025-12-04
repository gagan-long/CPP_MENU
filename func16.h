// function 16 Train seat birth (input any number within the range output – LB/UP/ML/SL/SU)
void function16()
 {
	cleardevice();
    int seatNumber;
    cout << "Enter Seat Number: ";
    cin >> seatNumber;

    if (seatNumber < 1 || seatNumber > 72) {
        cout << "Invalid seat number" << endl;
    } else {
        int rem = seatNumber % 8;
        if (rem == 1 || rem == 4)
            cout << "Berth type: LB" << endl;
        else if (rem == 2 || rem == 5)
            cout << "Berth type: MB" << endl;
        else if (rem == 3 || rem == 6)
            cout << "Berth type: UB" << endl;
        else if (rem == 7)
            cout << "Berth type: SL" << endl;
        else // rem == 0
            cout << "Berth type: SU" << endl;
    }
    getch();
}
