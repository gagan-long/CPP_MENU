// function 29: row and column sum of matrix

void function29() {
    cleardevice();
    int matrix[10][10], rowSum[10] = {0}, colSum[10] = {0};
    int r, c, i, j;

    cout << "Enter number of rows (max 10): ";
    cin >> r;
    cout << "Enter number of columns (max 10): ";
    cin >> c;

    cout << "Enter elements of the matrix:\n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cout << "Element [" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }

    // Calculate sum of rows and columns
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }

    cout << "Sum of each row:\n";
    for (i = 0; i < r; i++) {
        cout << "Sum of row " << i << " = " << rowSum[i] << "\n";
    }

    cout << "Sum of each column:\n";
    for (j = 0; j < c; j++) {
        cout << "Sum of column " << j << " = " << colSum[j] << "\n";
    }

    getch();
}
