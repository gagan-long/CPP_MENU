#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <math.h>


   void List1()
   {
   settextstyle(2,0,8);
   {
	 outtextxy(40,10,"Function menu for all Lab programs");
   }


    int choice ;

	// Display the menu
	int x = 0, y = 70, dy = 20,x1=200,x2=400;
	settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
	outtextxy(200, 60, (char*)" (Enter 0 to Exit)");
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

	// list 2
	outtextxy(x1, y, (char*)"11. Draw a Circle");
	outtextxy(x1, y + dy, (char*)"12. Draw a Rectangle");
	outtextxy(x1, y + 2*dy, (char*)"13. Draw a Line");
	outtextxy(x1, y + 3*dy, (char*)"14. Draw a Star");
	outtextxy(x1, y + 4*dy, (char*)"15. Draw an Ellipse");
	outtextxy(x1, y + 5*dy, (char*)"16. Draw an Arc");
	outtextxy(x1, y + 6*dy, (char*)"17. Draw a Polygon");
	outtextxy(x1, y + 7*dy, (char*)"18. Draw a Pie Slice");
	outtextxy(x1, y + 8*dy, (char*)"19. Draw a Bar");
	outtextxy(x1, y + 9*dy, (char*)"20. Draw a Filled Circle");

	// list 3

	outtextxy(x2, y, (char*)"21. Draw a Circle");
	outtextxy(x2, y + dy, (char*)"22. Draw a Rectangle");
	outtextxy(x2, y + 2*dy, (char*)"23. Draw a Line");
	outtextxy(x2, y + 3*dy, (char*)"24. Draw a Star");
	outtextxy(x2, y + 4*dy, (char*)"25. Draw an Ellipse");
	outtextxy(x2, y + 5*dy, (char*)"26. Draw an Arc");
	outtextxy(x2, y + 6*dy, (char*)"27. Draw a Polygon");
	outtextxy(x2, y + 7*dy, (char*)"28. Draw a Pie Slice");
	outtextxy(x2, y + 8*dy, (char*)"29. Draw a Bar");
	outtextxy(x2, y + 9*dy, (char*)"30. Draw a Filled Circle");

	}
int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;


   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }






	List1();

	outtextxy(200,50 , (char*)"Enter your choice:");
	gotoxy(45, 4);
	{
	cout<<"hi";
	       //	cin>>choice;
		//getch();
	};


   /* clean up */
   getch();
   closegraph();
   return 0;
}