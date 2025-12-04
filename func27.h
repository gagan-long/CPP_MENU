// function 27 palindromes(number)


void function27() {
    cleardevice();
    int num, temp, rev = 0, rem;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;
    while (temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if (num == rev)
        cout << num << " is a Palindrome";
    else
        cout << num << " is not a Palindrome";

    getch();
}
