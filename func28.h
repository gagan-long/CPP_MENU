// matrix addintion

void function28() {
    cleardevice();
    int A[10][10], B[10][10], C[10][10];
    int r, c, i, j;

    cout << "Enter number of rows (max 10): ";
    cin >> r;
    cout << "Enter number of columns (max 10): ";
    cin >> c;

    cout << "Enter elements of first matrix:\n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cout << "B[" << i << "][" << j << "] = ";
            cin >> B[i][j];
        }
    }

    // Adding the two matrices
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Resultant matrix after addition:\n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cout << C[i][j] << "\t";
        }
        cout << "\n";
    }

    getch();
}
