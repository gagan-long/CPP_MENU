// function 24 input marks 1/2/3 pass and fail

void function24() {
    cleardevice();

    int m1, m2, m3;
    float avg;
    
    cout << "Enter marks in three subjects (out of 100): ";
    cin >> m1 >> m2 >> m3;
    
    avg = (m1 + m2 + m3) / 3.0;
    
    if ((m1 > 40 && m2 > 40) || (m2 > 40 && m3 > 40) || (m3 > 40 && m1 > 40) || avg > 40)
        cout << "Result: PASS";
    else
        cout << "Result: FAIL";
    
    getch();
}
