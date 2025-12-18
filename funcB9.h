//Linear Search



void functionB9() {
    cleardevice();
    cout<<"Linear Search"<<endl;
    int n, key;
    int a[100];
    int i;  

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int pos = -1;

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            pos = i;
            break;
        }
    }

    if (pos == -1)
        cout << "\nElement Not Found!";
    else
        cout << "\nElement Found at Index: " << pos;

    getch();
}

