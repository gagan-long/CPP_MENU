#include <iostream.h>
//#include <vector>
#include <string.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <string.h>
#include <alloc.h>
#include <stdlib.h>

// Forward declarations for the placeholder functions
void function1();
void function2();
void function3();
void function4();
void function5();
void function6();
void function7();
void function8();
void function9();
void function10();
void placeholderFunction(int number);

void main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)""); // Initialize graphics mode

    int choice = -1;
    while (choice != 0) {
	// Clear the screen for the new menu
	cleardevice();

	// Display the menu
	int x = 50, y = 50, dy = 20;
	settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
	outtextxy(x, y, (char*)"100 Function Menu (Enter 0 to Exit)");
	y += dy;

	outtextxy(x, y, (char*)"1. Draw a Circle");
	outtextxy(x, y + dy, (char*)"2. Draw a Rectangle");
	outtextxy(x, y + 2*dy, (char*)"3. Draw a Line");
	outtextxy(x, y + 3*dy, (char*)"4. Draw a Star");
	outtextxy(x, y + 4*dy, (char*)"5. Draw an Ellipse");
	outtextxy(x, y + 5*dy, (char*)"6. Draw an Arc");
	outtextxy(x, y + 6*dy, (char*)"7. Draw a Polygon");
	outtextxy(x, y + 7*dy, (char*)"8. Draw a Pie Slice");
	outtextxy(x, y + 8*dy, (char*)"9. Draw a Bar");
	outtextxy(x, y + 9*dy, (char*)"10. Draw a Filled Circle");

	// Display generic options for the rest of the functions
	for (int i = 11; i <= 100; i++) {
	    // Note: In a real application, you would list the specific function names here.
	    // For a full list of 100, you would likely need a scrollable menu or multiple pages.
	    // This is just a conceptual example.
	}

	// Prompt user for input
	outtextxy(x, y + 11*dy, (char*)"Enter your choice:");
	char input[10];
	settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
	outtextxy(x + 150, y + 11*dy, (char*)"_");
       //	readimagefile(NULL, x + 150, y + 11*dy, x + 250, y + 11*dy + 20); // Placeholder for input
	cin >> choice;

	// Call the selected function based on user choice
	switch (choice) {
	    case 1:
		function1();
		break;
	    case 2:
		function2();
		break;
	    case 3:
		function3();
		break;
	    case 4:
		function4();
		break;
	    case 5:
		function5();
		break;
	    case 6:
		function6();
		break;
	    case 7:
		function7();
		break;
	    case 8:
		function8();
		break;
	    case 9:
		function9();
		break;
	    case 10:
		function10();
		break;
	    case 0:
		// Exit the loop
		break;
	    default:
		if (choice >= 11 && choice <= 100) {
		    placeholderFunction(choice);
		} else {
		    cleardevice();
		    outtextxy(50, 50, (char*)"Invalid choice. Please try again.");
		    getch();
		}
		break;
	}
    }

    closegraph(); // Close the graphics window

}

// --- Placeholder Function Implementations ---

void function1() {
    cleardevice();
    circle(getmaxx() / 2, getmaxy() / 2, 100);
    outtextxy(50, 50, (char*)"Drawing a Circle");
    getch();
}

void function2() {
    cleardevice();
    rectangle(100, 100, 300, 200);
    outtextxy(50, 50, (char*)"Drawing a Rectangle");
    getch();
}

void function3() {
    cleardevice();
    line(100, 100, 400, 200);
    outtextxy(50, 50, (char*)"Drawing a Line");
    getch();
}

void function4() {
    cleardevice();
    int points[] = {250, 100, 300, 200, 400, 200, 325, 275, 350, 375, 250, 300, 150, 375, 175, 275, 100, 200, 200, 200, 250, 100};
    drawpoly(11, points);
    outtextxy(50, 50, (char*)"Drawing a Star (as a polygon)");
    getch();
}

void function5() {
    cleardevice();
    ellipse(getmaxx() / 2, getmaxy() / 2, 0, 360, 150, 75);
    outtextxy(50, 50, (char*)"Drawing an Ellipse");
    getch();
}

void function6() {
    cleardevice();
    arc(getmaxx() / 2, getmaxy() / 2, 0, 180, 150);
    outtextxy(50, 50, (char*)"Drawing an Arc");
    getch();
}

void function7() {
    cleardevice();
    int points[] = {150, 150, 350, 150, 350, 350, 150, 350, 150, 150};
    drawpoly(5, points);
    outtextxy(50, 50, (char*)"Drawing a Polygon");
    getch();
}

void function8() {
    cleardevice();
    pieslice(getmaxx() / 2, getmaxy() / 2, 0, 90, 100);
    outtextxy(50, 50, (char*)"Drawing a Pie Slice");
    getch();
}

void function9() {
    cleardevice();
    bar(100, 100, 200, 300);
    outtextxy(50, 50, (char*)"Drawing a Bar");
    getch();
}

void function10() {
    cleardevice();
    setfillstyle(SOLID_FILL, RED);
    floodfill(getmaxx() / 2, getmaxy() / 2, WHITE);
    circle(getmaxx() / 2, getmaxy() / 2, 100);
    outtextxy(50, 50, (char*)"Drawing a Filled Circle");
    getch();
}

// A generic placeholder for the remaining functions
void placeholderFunction(int number) {
    cleardevice();
    char msg[50];
    cout<<msg<<"Placeholder for Function "<< number;
    outtextxy(50, 50, msg);
    getch();
}
