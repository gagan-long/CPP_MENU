// function 17 Armstrong number 153= 13+53+33=153 
void function17()
{
	cleardevice();
    int num, originalNum, remainder, n = 0, result = 0;
    cout << "Enter an integer: ";
    cin >> num;
    originalNum = num;

    // Count number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;
    // Calculate sum of digits each raised to the power n
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    getch();
}