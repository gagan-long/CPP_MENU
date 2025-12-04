// function 19 Date difference (Input Current Date and DOB) or any 2 Dates
void function19()
{
    cleardevice();
    int d1, m1, y1, d2, m2, y2;

    cout<<"Date Difference Calculator\n";
    cout<<"--------------------------------\n"<<endl;

    cout << "Enter first date (DD MM YYYY): ";
    cin >> d1 >> m1 >> y1;
    cout << "Enter second date (DD MM YYYY): ";
    cin >> d2 >> m2 >> y2;

    // Inline leap year check
    int isLeapYear1 = ( (y1%400 == 0) || (y1%4 == 0 && y1%100 != 0) );
    int isLeapYear2 = ( (y2%400 == 0) || (y2%4 == 0 && y2%100 != 0) );

    // Count days for first date
    int days1 = d1;
    int i;
    for(i=1; i<m1; i++) {
        if(i==2) days1 += (isLeapYear1 ? 29 : 28);
        else if(i==4 || i==6 || i==9 || i==11) days1 += 30;
        else days1 += 31;
    }
    days1 += y1*365 + y1/4 - y1/100 + y1/400;

    // Count days for second date
    int days2 = d2;
    for(i=1; i<m2; i++) {
        if(i==2) days2 += (isLeapYear2 ? 29 : 28);
        else if(i==4 || i==6 || i==9 || i==11) days2 +=30;
        else days2 +=31;
    }
    days2 += y2*365 + y2/4 - y2/100 + y2/400;

    int diff = abs(days2 - days1);
    cout << "Difference between dates: " << diff << " days" << endl;

    getch();
}
