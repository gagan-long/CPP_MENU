
// function 15 Voter eligible
void function15()
{
	cleardevice();
	int age;
	cout << "Enter your age: ";
	cin >> age;

	if (age >= 18) {
		cout << "You are eligible to vote." << endl;
	} else {
		cout << "You are not eligible to vote." << endl;
	}

	getch();
}
