//function 13 Prime number (Number – Prime) / prime number series( S no end No.)
void function13()
{
	cleardevice();
	int num, i, flag = 0;
	cout << "Enter a positive integer: ";
	cin >> num;
 
	if (num <= 1) {
		cout << num << " is not a prime number." << endl;
	} else {
		for (i = 2; i <= sqrt(num); i++) {
			if (num % i == 0) {
				flag = 1;
				break;
			}
			
		}
		if (flag == 0) {
			cout << num << " is a prime number." << endl;
		} else {
			cout << num << " is not a prime number." << endl;
		}
	}

	getch();
}