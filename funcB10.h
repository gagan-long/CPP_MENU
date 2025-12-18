//Bubble Sort

void functionB10() 
{
         cleardevice();
         cout<<"Bubble Sort"<<endl;
    int n, i, j;
    int a[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (i = 0; i < n; i++)
        cin >> a[i];

    // Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";

   getch();
}
