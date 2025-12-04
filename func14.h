// function 14 Factorial of any number
void function14()
{
	cleardevice();
	int n;
	unsigned long long factorial = 1; // Use unsigned long long for larger factorials

	cout << "Enter a positive integer: ";
	cin >> n;

	// Check if the user entered a negative number
	if (n < 0) {
		cout << "Error! Factorial of a negative number doesn't exist." << endl;
	} else {
		for (int i = 1; i <= n; ++i) {
			factorial *= i; // Multiply factorial by i
		}
		cout << "Factorial of " << n << " = " << factorial << endl;
	}

	getch();
}