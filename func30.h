

int function30()
{
    cleardevice();
    char str1[100], str2[100];
    int choice;

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    cout << "Choose operation:\n";
    cout << "1. strcpy (Copy String)\n";
    cout << "2. strcat (Concatenate Strings)\n";
    cout << "3. strlen (String Length)\n";
    cout << "4. strcmp (Compare Strings)\n";
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore(); // clear newline

    char result[200];
    switch (choice)
    {
        case 1:
            strcpy(result, str1);
            cout << "Copied String: " << result << endl;
            break;

        case 2:
            strcpy(result, str1);
            strcat(result, str2);
            cout << "Concatenated String: " << result << endl;
            break;

        case 3:
            cout << "Length of first string: " << strlen(str1) << endl;
            break;

        case 4:
        {
            int cmp = strcmp(str1, str2);
            if (cmp == 0)
                cout << "Strings are equal." << endl;
            else if (cmp < 0)
                cout << "First string is less than second string." << endl;
            else
                cout << "First string is greater than second string." << endl;
            break;
        }

        default:
            cout << "Invalid choice." << endl;
            break;
    }

    return 0;
}
