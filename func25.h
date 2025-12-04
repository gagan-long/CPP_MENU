void function25() {
    cleardevice();
    int arr[100], n, i;
    int max, min;

    cout << "Enter number of elements in array: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize max and min with first element
    max = arr[0];
    min = arr[0];

    // Loop to find max and min
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    cout << "\nMaximum element = " << max;
    cout << "\nMinimum element = " << min;

    getch();
}
