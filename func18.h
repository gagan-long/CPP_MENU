// function 18 Sum of digits  (145=1+4+5=10) 

void function18()
{
	cleardevice();
	int num, sum = 0, remainder;

	cout << "------------------ Function 18: Sum of Digits ------------------" << endl;
	cout << "This function calculates the sum of the digits of an integer." << endl<<endl;
	cout << "Enter an integer: ";
	cin >> num;

	while (num != 0) {
		remainder = num % 10; // Get the last digit
		sum += remainder;     // Add it to sum
		num /= 10;           // Remove the last digit
	}

	cout << "Sum of digits: " << sum << endl;
	getch();
}