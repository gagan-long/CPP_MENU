
void function22()
{
    cleardevice();
    char str[100];
    cout << "Enter a string: ";
    gets(str); // Use gets to read a line with spaces
    
    // Convert to uppercase
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }

    cout << "String in uppercase: " << str << endl;
    getch();
}