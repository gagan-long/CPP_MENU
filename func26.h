// function 26 sum of n numbers using array.
void function26() {
    cleardevice();
    int arr[100], n, i, sum = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calculate sum of array elements
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << "Sum of the array elements is: " << sum;

    getch();
}
