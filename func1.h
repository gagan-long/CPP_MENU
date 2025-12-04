


// include all function header files

// function 1: (a+b)3= a3+b3+3ab2+3a2b

void function1()
{
	cleardevice();
	double a, b;

	cout << "Enter the value for 'a': ";
	cin >> a;

	cout << "Enter the value for 'b': ";
	cin >> b;

	// Calculate the result using the expanded formula directly within main
	double a_cubed = a * a * a;
	double b_cubed = b * b * b;
	double term_3a2b = 3 * a * a * b;
	double term_3ab2 = 3 * a * b * b;
	double result = a_cubed + b_cubed + term_3a2b + term_3ab2;

	// Also calculate the result using the direct formula for verification
	double direct_result = (a + b) * (a + b) * (a + b);

	cout << "\nUsing the expanded formula: $(a+b)^3 = a^3 + b^3 + 3a^2b + 3ab^2$" << endl;
	cout << "The result is: " << result << endl;

	cout << "\nFor verification, $(a+b)^3 = " << direct_result << endl;
	getch();
    
	
}

// function 2: Area and Circumference of a Circle
void function2()
{
	cleardevice();
	// Define the constant value for Pi.
	const double PI = 3.14159;

	// Declare variables for the radius (input) and the results.
	double radius, area, circumference;

	// Prompt the user to enter the radius of the circle.
	cout << "Enter the radius of the circle: ";
	cin >> radius;

	// A simple check to ensure the radius is a valid number.
	if (radius <= 0)
	{
		cout << "Error: The radius must be a positive number." << endl;
	}

	// --- Calculations ---
	// Area of a circle
	area = PI * radius * radius;

	// Circumference of a circle
	circumference = 2 * PI * radius;

	// --- Display Results ---
	cout << "\n--- Results for a circle with radius " << radius << " ---\n";

	// Display Area
	cout << "\nFormula for Area: A = pi * r^2" << endl;
	cout << "Resulting Area: " << area << endl;

	// Display Circumference
	cout << "\nFormula for Circumference: C = 2 * pi * r" << endl;
	cout << "Resulting Circumference: " << circumference << endl;

	getch();
}





// function 3: Temperature Conversion
void function3()
{
	cleardevice();
	int choice;
	// Variables for the input temperature and the calculated result.
	// 'double' is used to allow for decimal values.
	double temperature, result;

	// --- Display Menu and Get User's Choice ---
	cout << "--- Temperature Converter ---\n";
	cout << "1. Convert Celsius to Fahrenheit\n";
	cout << "2. Convert Fahrenheit to Celsius\n";
	cout << "Enter your choice (1 or 2): ";
	cin >> choice;

	// --- Perform Action Based on Choice ---
	if (choice == 1)
	{
		// Celsius to Fahrenheit Conversion
		cout << "\nEnter the temperature in Celsius (°C): ";
		cin >> temperature;

		// Formula: F = (C * 9/5) + 32
		result = (temperature * 9.0 / 5.0) + 32;

		cout << "Result: " << temperature << "°C is equal to " << result << "°F." << endl;
	}
	else if (choice == 2)
	{
		// Fahrenheit to Celsius Conversion
		cout << "\nEnter the temperature in Fahrenheit (°F): ";
		cin >> temperature;

		// Formula: C = (F - 32) * 5/9
		result = (temperature - 32) * 5.0 / 9.0;

		cout << "Result: " << temperature << "°F is equal to " << result << "°C." << endl;
	}
	else
	{
		// Handle invalid input
		cout << "\nInvalid choice. Please run the program again and enter 1 or 2." << endl;
	}

	getch(); // Wait for user input before closing the console window
}



// function 4 simple interest
void function4(){
	cleardevice();
    float principal, rate, time, interest;
    
    cout << "Enter Principal Amount: ";
    cin >> principal;
    
    cout << "Enter Rate of Interest: ";
    cin >> rate;
    
    cout << "Enter Time (in years): ";
    cin >> time;
    
    // Calculate simple interest
    interest = (principal * rate * time) / 100;

    cout << "Simple Interest = " << interest << endl;

    getch();
}



// function 5 average of five subjects
void function5()
{
	cleardevice();
    float marks[5], sum = 0, average;
    cout << "Enter marks for five subjects: ";
    for(int i = 0; i < 5; i++) {
        cin >> marks[i];        // Input marks for each subject
        sum += marks[i];        // Add each to sum
    }
    average = sum / 5;          // Calculate average
    cout << "Average marks = " << average << endl;
    getch();
}



// function 6 Ax2+Bx+c=0 find the roots of quadratic eq. x1=-b(+/-)Sqrt(b2-4ac)/2a 
void function6()
{
	cleardevice();
    double a, b, c, discriminant, root1, root2, realPart, imagPart;

    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } else if (discriminant == 0) {
        // One repeated real root
        root1 = -b / (2 * a);
        cout << "Roots are real and same." << endl;
        cout << "Root 1 = Root 2 = " << root1 << endl;
    } else {
        // Complex conjugate roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "Root 1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;
    }

   getch();
}




// function 7 Series calculation SIN/COS/ex =1+x/1!+x2/2!+…….+Tn 

void function7()
 {
	cleardevice();
    int n, i;
    float x, term = 1, sum = 1; // Initialize sum as first term (1)
    cout << "Enter x (value): ";
    cin >> x;
    cout << "Enter number of terms: ";
    cin >> n;
    for(i = 1; i < n; i++) {
        term = term * x / i; // Term: x^i / i!
        sum += term;
    }
    cout << "e^" << x << " = " << sum << endl;
    getch();
}




// function 8 Leap Year
void function8()
{
	cleardevice();
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }
    getch();
}




// function 9 Greatest/ smallest among 3 numbers
void function9()
{	
	cleardevice();
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    cout << "Greatest number: " << max << endl;
    cout << "Smallest number: " << min << endl;

    getch();
}



// function 10 Triangles sides
void function10()
 {	
	cleardevice();
    int side1, side2, side3;
    cout << "Enter length of side 1: ";
    cin >> side1;  
    cout << "Enter length of side 2: ";
    cin >> side2;
    cout << "Enter length of side 3: ";
    cin >> side3;

    if ((side1 + side2 > side3) &&
        (side2 + side3 > side1) &&
        (side3 + side1 > side2)) {
        cout << "It is a valid triangle." << endl;
    } else {
        cout << "It is not a valid triangle." << endl;
    }
    getch();
}


// function 11 Even odd check
void function11()
{
	cleardevice();
 	int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }

    getch();
}


// function 12 Check Nelson number
void function12()
{
	cleardevice();
	int num, sum = 0, temp, remainder;
	cout << "Enter a number: ";
	cin >> num;
	temp = num;

	while (temp != 0) {
		remainder = temp % 10;
		sum += remainder * remainder * remainder; // Cube of the digit
		temp /= 10;
	}

	if (sum == num) {
		cout << num << " is a Nelson number." << endl;
	} else {
		cout << num << " is not a Nelson number." << endl;
	}

	getch();
}
