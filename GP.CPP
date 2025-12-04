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



union REGS i, o;

void initmouse() {
    i.x.ax = 0;
    int86(0x33, &i, &o);
}
void showmouseptr() {
    i.x.ax = 1;
    int86(0x33, &i, &o);
}
void hidemouseptr() {
    i.x.ax = 2;
    int86(0x33, &i, &o);
}
void getmousepos(int *button, int *x, int *y) {
    i.x.ax = 3;
    int86(0x33, &i, &o);
    *button = o.x.bx;
    *x = o.x.cx;
    *y = o.x.dx;
}

void Menu() {
    int x, y, button, opt = -1, hover = -1;
    char *menu[] = {"List 1 to 40", "List 41 to 80", "Exit"};
    int x0 = 140, y0 = 120, w = 250, h = 60, n = 3;

    initmouse();
    showmouseptr();

    while (1) {
        getmousepos(&button, &x, &y);
        hover = -1;

        // Detect hover
        for (int i = 0; i < n; ++i) {
            if (x > x0 && x < x0 + w && y > y0 + i * h && y < y0 + (i + 1) * h) {
                hover = i;
                break;
            }
        }

        cleardevice();
        settextstyle(2, 0, 8);
        outtextxy(40, 30, "Function menu for all Lab programs");

        settextstyle(2, 0, 6);
        for (int j = 0; j < n; ++j) {
            if (j == hover) setcolor(YELLOW); else setcolor(WHITE);
            rectangle(x0, y0 + j * h, x0 + w, y0 + (j + 1) * h);
            outtextxy(x0 + 20, y0 + j * h + 20, menu[j]);
        }

        if ((button & 1) && hover != -1) { // Left button click
            opt = hover;
            break;
        }
        delay(90); // Stability for CPU usage
    }
    hidemouseptr();

    switch (opt) {
        case 0:
            List1();
            break;
        case 1:
            List2();
            break;
        case 2:
            exit(0);
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
