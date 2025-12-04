

void function23(){
    cleardevice();
    char name[100], result[100]="";
    int i = 0, j = 0, n, start = 0, k;
    cout << "Enter full name (UPPERCASE, spaces between): ";
    gets(name);

    n = strlen(name);

    // Process initials
    result[j++] = name[0];
    result[j++] = '.';

    for (i = 1; i < n; i++) {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0') {
            // Save starting index of last word
            if (strchr(name+i+1, ' ') == NULL) {
                start = i+1;
                break;
            }
            result[j++] = name[i+1];
            result[j++] = '.';
        }
    }

    // Attach surname
    for (k = start; k < n; k++) {
        if (name[k] != ' ')
            result[j++] = name[k];
    }
    result[j] = '\0';

    cout << "Short form: " << result << endl;
    getch();
}
