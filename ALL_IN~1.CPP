#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <stdlib.h>
#include <iomanip.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <alloc.h>
#include <fstream.h>
#include <ctype.h>
#include <dos.h>
#include <time.h>
#include <process.h>
#include <limits.h>
#include <process.h>



// #include "Menu.h"
#include "List1.h"
#include "List2.h"


void Menu()
{
	
	int choice = -1;
	while (choice != 0)
	{
		cleardevice();

		settextstyle(2, 0, 8);
		{
			outtextxy(40, 10, "Function menu for all Lab programs");
			settextstyle(2, 0, 5);
			{
				outtextxy(100, 70, "Enter 1 for list 1 to 40 ||  2 for list 41 to 80 ");
				outtextxy(190, 120, "Enter 0 to Exit");
			}
		}

		settextstyle(2, 0, 6);
		{
			outtextxy(190, 169, "Enter your choice:");
		}
		gotoxy(50, 12);
		{
			//	cout<<"hi";
			cin >> choice;
		};

		// function call  list acording to choice

		switch (choice)
		{
		case 0:
			exit(0);
			break;
		case 1:
			/* code */
			List1();
			Menu();
			break;
		case 2:
			List2();
			Menu();
			break;
		default:

			cleardevice();
			outtextxy(200, 200, "Invalid choice. Please try again.");
			getch();
			choice = -1;

			break;
		}

		
	}
	
}


//    ----------------------  main function ------------------------------
int main(void)
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\TURBOC3\BGI");
	Menu();
	getch();
	closegraph();
	return 0;
}
