


     // function 21  Find the day (Input DOB)
void function21()
{
    cleardevice();
    int day, month, year;
    cout << "Enter your date of birth (DD MM YYYY): ";
    cin >> day >> month >> year;

    // Adjust months and year for Zeller's algorithm
    if (month < 3) {
        month += 12;
        year -= 1;
    }

    int k = year % 100;      // Year of the century
    int j = year / 100;      // Zero-based century

    // Zeller's formula
    int f = day + (13 * (month + 1)) / 5 + k + k / 4 + j / 4 + 5 * j;
    int dayOfWeek = f % 7;

    // Map result to day name
    char* dayName;
    switch (dayOfWeek) {
        case 0: dayName = "Saturday"; break;
        case 1: dayName = "Sunday"; break;
        case 2: dayName = "Monday"; break;
        case 3: dayName = "Tuesday"; break;
        case 4: dayName = "Wednesday"; break;
        case 5: dayName = "Thursday"; break;
        case 6: dayName = "Friday"; break;
        default: dayName = "Unknown"; break;
    }

    cout << "The day of the week is: " << dayName << endl;
    getch();
}