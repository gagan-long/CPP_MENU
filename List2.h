#include "funcB1.h"
#include "funcB2.h"


int List2(void)
{

	int choice;
	while (choice != 0)
	{
		cleardevice();
		settextstyle(2, 0, 8);
		{
			outtextxy(40, 10, " all Lab programs from 41 to 80");
		}

		// Display the menu
		int x = 0, y = 70, dy = 20, x1 = 350;
		settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
		outtextxy(200, 60, (char *)" (Enter 0 to Exit)");
		y += dy;

		outtextxy(x, y, (char *)"1. Hash Functions");
		outtextxy(x, y + dy, (char *)"2. linear DSA");
		// outtextxy(x, y + 2 * dy, (char *)"3. not defined");
		// outtextxy(x, y + 3 * dy, (char *)"4. Draw a Star");
		// outtextxy(x, y + 4 * dy, (char *)"5. Draw an Ellipse");
		// outtextxy(x, y + 5 * dy, (char *)"6. Draw an Arc");
		// outtextxy(x, y + 6 * dy, (char *)"7. Draw a Polygon");
		// outtextxy(x, y + 7 * dy, (char *)"8. Draw a Pie Slice");
		// outtextxy(x, y + 8 * dy, (char *)"9. Draw a Bar");
		// outtextxy(x, y + 9 * dy, (char *)"10. Draw a Filled Circle");
		// outtextxy(x, y + 10 * dy, (char *)"11. Draw a Circle");
		// outtextxy(x, y + 11 * dy, (char *)"12. Draw a Rectangle");
		// outtextxy(x, y + 12 * dy, (char *)"13. Draw a Line");
		// outtextxy(x, y + 13 * dy, (char *)"14. Draw a Star");
		// outtextxy(x, y + 14 * dy, (char *)"15. Draw an Ellipse");
		// outtextxy(x, y + 15 * dy, (char *)"16. Draw an Arc");
		// outtextxy(x, y + 16 * dy, (char *)"17. Draw a Polygon");
		// outtextxy(x, y + 17 * dy, (char *)"18. Draw a Pie Slice");
		// outtextxy(x, y + 18 * dy, (char *)"19. Draw a Bar");
		// outtextxy(x, y + 19 * dy, (char *)"20. Draw a Filled Circle");

		// // list 2
		outtextxy(x1, y, (char *)"21. Draw a Circle");
		// outtextxy(x1, y + dy, (char *)"22. Draw a Rectangle");
		// outtextxy(x1, y + 2 * dy, (char *)"23. Draw a Line");
		// outtextxy(x1, y + 3 * dy, (char *)"24. Draw a Star");
		// outtextxy(x1, y + 4 * dy, (char *)"25. Draw an Ellipse");
		// outtextxy(x1, y + 5 * dy, (char *)"26. Draw an Arc");
		// outtextxy(x1, y + 6 * dy, (char *)"27. Draw a Polygon");
		// outtextxy(x1, y + 7 * dy, (char *)"18. Draw a Pie Slice");
		// outtextxy(x1, y + 8 * dy, (char *)"29. Draw a Bar");
		// outtextxy(x1, y + 9 * dy, (char *)"30. Draw a Filled Circle");
		// outtextxy(x1, y + 10 * dy, (char *)"31. Draw a Circle");
		// outtextxy(x1, y + 11 * dy, (char *)"32. Draw a Rectangle");
		// outtextxy(x1, y + 12 * dy, (char *)"33. Draw a Line");
		// outtextxy(x1, y + 13 * dy, (char *)"34. Draw a Star");
		// outtextxy(x1, y + 14 * dy, (char *)"35. Draw an Ellipse");
		// outtextxy(x1, y + 15 * dy, (char *)"36. Draw an Arc");
		// outtextxy(x1, y + 16 * dy, (char *)"37. Draw a Polygon");
		// outtextxy(x1, y + 17 * dy, (char *)"38. Draw a Pie Slice");
		// outtextxy(x1, y + 18 * dy, (char *)"39. Draw a Bar");
		// outtextxy(x1, y + 19 * dy, (char *)"40. Draw a Filled Circle");

		// choice from list 2
		outtextxy(200, 50, (char *)"Enter your choice:");
		gotoxy(45, 4);
		{

			cin >> choice;
		};

		switch (choice)
		{
		case 1:
			functionB1();
			break;
		case 2:
			functionB2();
			break;
		case 0:
			// Exit the loop
			break;
		default:

			cleardevice();
			outtextxy(50, 50, "Invalid choice. Please try again.");

			getch();
			// }
			break;
		}
		//	return 0;
		// exit(0);
	}

	return 0;
}
