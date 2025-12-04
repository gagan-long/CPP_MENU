
//  include all programs in one using functions for each programs

// function 2: Area and volume of triangle/ circle/Rectangle
#include "func1.h"
// function 3: Temperature Conversion
// #include "func3.h"
// function 4 simple interest
// #include "func4.h"
// function 5 average of five subjects
// #include "func5.h"
// function 6 Ax2+Bx+c=0 find the roots of quadratic eq. x1=-b(+/-)Sqrt(b2-4ac)/2a
// #include "func6.h"
// function 7 Series calculation SIN/COS/ex =1+x/1!+x2/2!+…….+Tn
// #include "func7.h"
// function 8 Leap Year
// #include "func8.h"
// function 9 Greatest/ smallest among 3 numbers
// #include "func9.h"
// function 10 Triangles sides
// #include "func10.h"
// function 11 Even odd check
// #include "func11.h"
// function 12 Check Nelson number
// #include "func12.h"
// function 13 Prime number (Number – Prime) / prime number series( S no end No.)
#include "func13.h"
// function 14 Factorial of any number
#include "func14.h"
// function 15 Voter eligible
#include "func15.h"
// function 16 Train seat birth (input any number within the range output – LB/UP/ML/SL/SU)
#include "func16.h"
// function 17 Armstrong number 153= 13+53+33=153
#include "func17.h"
// function 18 Sum of digits  (145=1+4+5=10)
#include "func18.h"
// function 19 Date difference (Input Current Date and DOB) or any 2 Dates
#include "func19.h"
// function 20 Various format (table start and end ) Pyramid , Calendar
#include "func20.h"
// function 21  Find the day (Input DOB)
#include "func21.h"
// function 22 Conversion (All capital each word capital)
#include "func22.h"

// function 23 (ARUN KUMAR SAHU - A.K.SAHU)
#include "func23.h"

// function 24 input marks 1/2/3 pass and fail
#include "func24.h"

// function 25 Array (1d)find max min.
#include "func25.h"

// function 26 sum of n numbers using array.
#include "func26.h"

//function 27 palindromes(number)
#include "func27.h"

// function 28 matrix addition
#include "func28.h"

// function 29 row and column sum of matrix
#include "func29.h"

// function 30 string function (strcpy,strcat,strlen,strcmp)
#include "func30.h"

// function 31 1-one 2-two 3-three
#include "func31.h"

// function 32 123 - one hundred twenty three
// #include "func32.h"

// function 33 - count the number of char / words in sentence
//#include "func33.h"

// function 34 read and write in the array
#include "func34.h"

// functin to 35 operations on array
// #include "func35.h"




//------------------------------------------  list 1  upto 40  -------------------------------


int List1(void)
{
	int choice = -1;

	while (choice != 0)
	{
		cleardevice();
		settextstyle(2, 0, 8);
		{
			outtextxy(50, 10, " all Lab programs from 1 to 40");
		}
		/* code */
		// Display the menu
		int x = 0, y = 70, dy = 20, x1 = 370;
		settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
		outtextxy(200, 60, (char *)" (Enter 0 to Exit)");
		y += dy;

		outtextxy(x, y, (char *)"1. (a+b)3= a3+b3+3ab2+3a2b");
		outtextxy(x, y + dy, (char *)"2.Area and circumference of circle ");
		outtextxy(x, y + 2 * dy, (char *)"3.Temperature Conversion");
		outtextxy(x, y + 3 * dy, (char *)"4.Simple Interest Calculation");
		outtextxy(x, y + 4 * dy, (char *)"5.Average of five subjects");
		outtextxy(x, y + 5 * dy, (char *)"6.Ax2+Bx+c=0 find root of quadratic eq");
		outtextxy(x, y + 6 * dy, (char *)"7.Series SIN/COS/ex =1+x/1!+x2/2!+.+Tn ");
		outtextxy(x, y + 7 * dy, (char *)"8.Leap Year ");
		outtextxy(x, y + 8 * dy, (char *)"9.Greatest/ smallest among 3 numbers ");
		outtextxy(x, y + 9 * dy, (char *)"10.Triangles sides ");
		outtextxy(x, y + 10 * dy, (char *)"11.Even odd check");
		outtextxy(x, y + 11 * dy, (char *)"12.Check Nelson number");
		outtextxy(x, y + 12 * dy, (char *)"13.Prime number ");
		outtextxy(x, y + 13 * dy, (char *)"14.Factorial of any number");
		outtextxy(x, y + 14 * dy, (char *)"15.Voter eligible");
		outtextxy(x, y + 15 * dy, (char *)"16.Train seat birth");
		outtextxy(x, y + 16 * dy, (char *)"17. Armstrong number");
		outtextxy(x, y + 17 * dy, (char *)"18. Sum of digits");
		outtextxy(x, y + 18 * dy, (char *)"19. Date difference");
		outtextxy(x, y + 19 * dy, (char *)"20.Various format Pyramid");

		line(360, 80, 360, 600);
		// list 2
		outtextxy(x1, y, (char *)"21.Find the day ");
		outtextxy(x1, y + dy, (char *)"22. uppercase ");
		outtextxy(x1, y + 2 * dy, (char *)"23.(ARUN KUMAR SAHU-A.K.SAHU)");
		outtextxy(x1, y + 3 * dy, (char *)"24. input marks 1/2/3 pass and fail");
		outtextxy(x1, y + 4 * dy, (char *)"25. Array (1d)find max min.");
		outtextxy(x1, y + 5 * dy, (char *)"26. sum of n numbers using array.");
		outtextxy(x1, y + 6 * dy, (char *)"27. palindromes");
		outtextxy(x1, y + 7 * dy, (char *)"28. matrix addition");
		outtextxy(x1, y + 8 * dy, (char *)"29. row and column sum of matrix");
		outtextxy(x1, y + 9 * dy, (char *)"30. string function (strcpy,strcat,strlen,strcmp)");
		outtextxy(x1, y + 10 * dy, (char *)"31. 1-ONE, 123456 ONN TWO THREE FOUR FIVE SIX");
		outtextxy(x1, y + 11 * dy, (char *)"32. ");
		outtextxy(x1, y + 12 * dy, (char *)"33. ");
		outtextxy(x1, y + 13 * dy, (char *)"34. read and write in the array");
		outtextxy(x1, y + 14 * dy, (char *)"35. operations on array");
		outtextxy(x1, y + 15 * dy, (char *)"36. NOT DEFINED");
		outtextxy(x1, y + 16 * dy, (char *)"37. NOT DEFINED");
		outtextxy(x1, y + 17 * dy, (char *)"38. NOT DEFINED");
		outtextxy(x1, y + 18 * dy, (char *)"39. NOT DEFINED");
		outtextxy(x1, y + 19 * dy, (char *)"40. NOT DEFINED");

		// choice from list 1
		outtextxy(200, 50, (char *)"Enter your choice:");
		gotoxy(45, 4);
		{

			cin >> choice;
		};

		switch (choice)
		{
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
		case 11:
			function11();
			break;
		case 12:
			function12();
			break;
		case 13:
			function13();
			break;
		case 14:
			function14();
			break;
		case 15:
			function15();
			break;
		case 16:
			function16();
			break;
		case 17:
			function17();
			break;
		case 18:
			function18();
			break;
		case 19:
			function19();
			break;
		case 20:
			function20();
			break;
		case 21:
	    	function21();
			break;
		case 22:
			function22();
			break;
		case 23:
			function23();
			break;
		case 24:
	 		function24();
			break;
		case 25:
			function25();
			break;
		case 26:
			function26();
			break;
		case 27:
			function27();
			break;
		case 28:
			function28();
			break;
		case 29:
			function29();
			break;
		case 30:
			 function30();
			break;
		case 31:
			function31();
			break;
		case 32:
			// function32();
			break;
		case 33:
			// function33();
			break;
		case 34:
			function34();
			break;

		case 35:
			//  function35();
			break;
		case 0:
			// Exit the loop
			// return 0;
			break;
		default:

			cleardevice();
			outtextxy(200, 200, "Invalid choice. Please try again.");

			getch();
			
			choice = -1;
			break;
		}
		
		
	}
	
	return 0;
}
