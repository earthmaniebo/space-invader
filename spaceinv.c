#include <stdio.h>
#include <conio.h>

void welcomeScreen();
void gamePlay();

void main()
{
	int i, j;
	char menu;
	clrscr();
	welcomeScreen();
	do
	{
		clrscr();
		
		for (i = 0; i < 1; ++i) //horizontal up
		{
			for (j = 32; j < 48; ++j)
			{
				gotoxy(1 + j, 8 + i);
				putch(178);
			}
		}
		
		for (i = 0; i < 1; ++i) //horizontal down
		{
			for (j = 32; j < 48; ++j)
			{
				gotoxy(1 + j, 16 + i);
				putch(178);
			}
		}
		
		for (i = 9; i < 18; ++i) //vertical left
		{
			for (j = 31; j < 32; ++j)
			{
				gotoxy(1 + j, i - 1);
				putch(178);
			}
		}
		
		for (i = 9; i < 18; ++i) //vertical right
		{
			for (j = 48; j < 49; ++j)
			{
				gotoxy(1 + j, i - 1);
				putch(178);
			}
		}
		
		gotoxy(35, 5); putch(16); 
		gotoxy(46, 5); putch(17);
		gotoxy(36, 5); printf("MAIN  MENU");

		gotoxy(36, 10);printf("[N]ew Game");
		gotoxy(34, 12);printf("[I]nstructions");
		gotoxy(38, 14);printf("[Q]uit");
		
		menu = getch();
		switch(menu)

			{

			case 'n':
			case 'N':
					{
						gamePlay();
					}break;

			case 'i':
			case 'I':
					{
						gotoxy(10,16); puts("INSTRUCTIONS:");
						gotoxy(13,18); puts("< - move left");
						gotoxy(13,19); puts("> - move right");
						gotoxy(13,20); puts("^ - fire");
						gotoxy(1,25); printf("Press any key to continue..");
						getch();

					}break;
			case 'Q':	goto quit;
        } 
      }while (menu != 'q');
   quit:
   clrscr();
   gotoxy(32,12); puts("THANKS FOR PLAYING");     
   getch();
}

void welcomeScreen()
{
int i, j;
	clrscr();
	
	for (i = 0; i < 1; ++i)
	{
		for (j = 0; j < 80; ++j)
		{
			gotoxy(1 + j, 1 + i);
			putch(178);
			delay(4);
		}
	}
	
	for (i = 25; i > 24; --i)
	{
		for (j = 81; j > 0; --j)
		{
			gotoxy(j - 1, i - 1);
			putch(178);
			delay(4);
		}
	}
	
	// LETTER S
	delay(50); gotoxy(8,2); putch(232);
	delay(50); gotoxy(7,2); putch(232);
	delay(50); gotoxy(6,2); putch(232);
	delay(50); gotoxy(5,2); putch(232);
	delay(50); gotoxy(4,2); putch(232);
	delay(50); gotoxy(3,2); putch(232);
	
	/**********************************/
	
	delay(50); gotoxy(3,3); putch(232);
	delay(50); gotoxy(3,4); putch(232);
	delay(50); gotoxy(3,5); putch(232);
	delay(50); gotoxy(3,6); putch(232);
	
	/**********************************/
	
	delay(50); gotoxy(4,6); putch(232);
	delay(50); gotoxy(5,6); putch(232);
	delay(50); gotoxy(6,6); putch(232);
	delay(50); gotoxy(7,6); putch(232);
	delay(50); gotoxy(8,6); putch(232);
	
	/**********************************/
	
	delay(50); gotoxy(8,7); putch(232);
	delay(50); gotoxy(8,8); putch(232);
	delay(50); gotoxy(8,9); putch(232);
	delay(50); gotoxy(8,10); putch(232);
	
	/**********************************/
	
	delay(50); gotoxy(7,10); putch(232);
	delay(50); gotoxy(6,10); putch(232);
	delay(50); gotoxy(5,10); putch(232);
	delay(50); gotoxy(4,10); putch(232);
	delay(50); gotoxy(3,10); putch(232);
	
	/**********************************/
	
	//LETTER P
	delay(50); gotoxy(20,10); putch(232);
	delay(50); gotoxy(20,9); putch(232);
	delay(50); gotoxy(20,8); putch(232);
	delay(50); gotoxy(20,7); putch(232);
	delay(50); gotoxy(20,6); putch(232);
	delay(50); gotoxy(20,5); putch(232);
	delay(50); gotoxy(20,4); putch(232);
	delay(50); gotoxy(20,3); putch(232);
	delay(50); gotoxy(20,2); putch(232);
	
	/**********************************/
	
	delay(50); gotoxy(21,2); putch(232);
	delay(50); gotoxy(22,2); putch(232);
	delay(50); gotoxy(23,2); putch(232);
	delay(50); gotoxy(24,2); putch(232);
	delay(50); gotoxy(25,2); putch(232);
	
	/**********************************/
	
	delay(50); gotoxy(25,3); putch(232);
	delay(50); gotoxy(25,4); putch(232);
	delay(50); gotoxy(25,5); putch(232);
	delay(50); gotoxy(25,6); putch(232);
	
	/**********************************/
	
	delay(50); gotoxy(24,6); putch(232);
	delay(50); gotoxy(23,6); putch(232);
	delay(50); gotoxy(22,6); putch(232);
	delay(50); gotoxy(21,6); putch(232);
	
	/**********************************/
	
	//LETTER A
	delay(50); gotoxy(34,10); putch(232);
	delay(50); gotoxy(34,9); putch(232);
	delay(50); gotoxy(34,8); putch(232);
	delay(50); gotoxy(34,7); putch(232);
	delay(50); gotoxy(34,6); putch(232);
	
	/**********************************/
	
	delay(50); gotoxy(35,5); putch(232);
	delay(50); gotoxy(36,4); putch(232);
	delay(50); gotoxy(37,3); putch(232);
	delay(50); gotoxy(38,2); putch(232);
	
	/**********************************/
	
	delay(50); gotoxy(39,3); putch(232);
	delay(50); gotoxy(40,4); putch(232);
	delay(50); gotoxy(41,5); putch(232);
	delay(50); gotoxy(42,6); putch(232);
	
	/**********************************/
	
	delay(50); gotoxy(42,7); putch(232);
	delay(50); gotoxy(42,8); putch(232);
	delay(50); gotoxy(42,9); putch(232);
	delay(50); gotoxy(42,10); putch(232);
	
	/**********************************/
	
	delay(50); gotoxy(41,6); putch(232);
	delay(50); gotoxy(40,6); putch(232);
	delay(50); gotoxy(39,6); putch(232);
	delay(50); gotoxy(38,6); putch(232);
	delay(50); gotoxy(37,6); putch(232);
	delay(50); gotoxy(36,6); putch(232);
	delay(50); gotoxy(35,6); putch(232);
	
	/**********************************/
	
	//LETTER C
	delay(50); gotoxy(58,2); putch(232);
	delay(50); gotoxy(57,2); putch(232);
	delay(50); gotoxy(56,2); putch(232);
	delay(50); gotoxy(55,2); putch(232);
	delay(50); gotoxy(54,2); putch(232);
	delay(50); gotoxy(53,2); putch(232);
	delay(50); gotoxy(52,2); putch(232);
	
	/**********************************/
	
	delay(50); gotoxy(52,3); putch(232);
	delay(50); gotoxy(52,4); putch(232);
	delay(50); gotoxy(52,5); putch(232);
	delay(50); gotoxy(52,6); putch(232);
	delay(50); gotoxy(52,7); putch(232);
	delay(50); gotoxy(52,8); putch(232);
	delay(50); gotoxy(52,9); putch(232);
	delay(50); gotoxy(52,10); putch(232);
	
	/**********************************/
	
	delay(50); gotoxy(53,10); putch(232);
	delay(50); gotoxy(54,10); putch(232);
	delay(50); gotoxy(55,10); putch(232);
	delay(50); gotoxy(56,10); putch(232);
	delay(50); gotoxy(57,10); putch(232);
	delay(50); gotoxy(58,10); putch(232);
	
	/**********************************/
	
	//LETTER E
	delay(50); gotoxy(75,10); putch(232);
	delay(50); gotoxy(74,10); putch(232);
	delay(50); gotoxy(73,10); putch(232);
	delay(50); gotoxy(72,10); putch(232);
	delay(50); gotoxy(71,10); putch(232);
	delay(50); gotoxy(70,10); putch(232);
	delay(50); gotoxy(69,10); putch(232);
	delay(50); gotoxy(68,10); putch(232);
	
	/**********************************/
	
	delay(50); gotoxy(68,9); putch(232);
	delay(50); gotoxy(68,8); putch(232);
	delay(50); gotoxy(68,7); putch(232);
	delay(50); gotoxy(68,6); putch(232);
	delay(50); gotoxy(68,5); putch(232);
	delay(50); gotoxy(68,4); putch(232);
	delay(50); gotoxy(68,3); putch(232);
	delay(50); gotoxy(68,2); putch(232);
	
	/**********************************/
	
	delay(50); gotoxy(69,2); putch(232);
	delay(50); gotoxy(70,2); putch(232);
	delay(50); gotoxy(71,2); putch(232);
	delay(50); gotoxy(72,2); putch(232);
	delay(50); gotoxy(73,2); putch(232);
	delay(50); gotoxy(74,2); putch(232);
	delay(50); gotoxy(75,2); putch(232);
	
	/**********************************/
	
	delay(50); gotoxy(69,6); putch(232);
	delay(50); gotoxy(70,6); putch(232);
	delay(50); gotoxy(71,6); putch(232);
	delay(50); gotoxy(72,6); putch(232);
	delay(50); gotoxy(73,6); putch(232);
	
	/**********************************/
	
	gotoxy(18, 15); printf("I      N      V      A      D      E      R");
	
	delay(50); gotoxy(78,10); putch(234);
	gotoxy(1,25); printf("Earth Ponce D. Maniebo");
	gotoxy(73,25); printf("DIT 112");
	gotoxy(27,20); printf("Press any key to continue..");
	getch();
}

void gamePlay()
{
	int xcol = 1, xrow = 1;
	int ycol = 40, yrow = 24;
	int xbombcol, xbombrow, xbombstat = 0;
	int yfirecol = ycol, yfirerow, yfirestat = 0;
	char ch;
	
	clrscr();
	gotoxy(xcol, xrow); putch('X');
	gotoxy(ycol, yrow); putch('Y');
	do
	{
		if(xrow % 2 != 0)
		{
			if(xcol < 80)
			{
				delay(5);
				gotoxy(xcol, xrow); putch(' ');
				xcol++;
				gotoxy(xcol, xrow); putch('X');
			}
			else
			{
				gotoxy(xcol, xrow); putch(' ');
				xrow++;
				gotoxy(xcol, xrow); putch('X');
			}
		}
		else if(xrow % 2 == 0)
		{
			if(xcol > 1)
			{
				delay(5);
				gotoxy(xcol, xrow); putch(' ');
				xcol--;
				gotoxy(xcol, xrow); putch('X');
			}
			else
			{
				gotoxy(xcol, xrow); putch(' ');
				xrow++;
				gotoxy(xcol, xrow); putch('X');
			}
		}
		if(xbombstat == 0)
		{
			xbombcol = xcol;
			xbombrow = xrow + 1;
			xbombstat = 1;
		}
		if(xbombstat == 1)
		{
			if (xbombrow < 24)
			{
				delay(100); gotoxy(xbombcol, xbombrow); putch(' ');
				xbombrow++; gotoxy(xbombcol, xbombrow); putch(25);     
			}
			else
			{
				xbombstat = 0;
				gotoxy(xbombcol, xbombrow); putch(' ');	
			}
		}
		if(xbombrow == yrow & xbombcol == ycol)
		{
			clrscr(); 
			gotoxy(37, 12); puts("YOU LOSE");
			gotoxy(1, 25); printf("Press any key to return to main menu..");
			break;
		}
		if(kbhit())
		{
			ch = getch();
			switch(ch)
			{
				case 72: if(yfirestat == 0) // up arrow key
						 {
							yfirestat = 1;
							yfirecol = ycol;
							yfirerow = 23;
						 } break;
				case 75: if(ycol > 1) //left arrow
						 {
							gotoxy(ycol, yrow); putch(' ');
							ycol--;
							gotoxy(ycol, yrow); putch('Y');
						 } break;
				case 77: if(ycol < 80) //right arrow
						 {
							gotoxy(ycol, yrow); putch(' ');
							ycol++;
							gotoxy(ycol, yrow); putch('Y');
						 } break;
				case 'L':
				case 'l': goto cheatcode;
			}
		}
		if (yfirestat == 1)
		{
			if(yfirerow > 1)
			{
				delay(1); gotoxy(yfirecol, yfirerow); putch(' ');
				yfirerow--; gotoxy(yfirecol, yfirerow); putch(24);
				if(yfirerow == 1)
				{
					gotoxy(yfirecol, yfirerow); putch(' ');
				}
				if(yfirerow == xrow & yfirecol == xcol)
				{
					clrscr(); 
					gotoxy(38, 12); puts("YOU WIN");
					gotoxy(1, 25); printf("Press any key to return to main menu..");
					break;
				}
			}
			else if(kbhit())
			{
				ch = getch();
				switch(ch)
					
				{
					case 72: if(yfirerow == 1) // up arrow key 
							{
								yfirecol = ycol;
								yfirerow = 23;
								gotoxy(yfirecol, yfirerow); putch(' ');
								yfirerow--; gotoxy(yfirecol, yfirerow); putch(24);
								if(yfirerow == xrow & yfirecol == xcol)
								{
									clrscr(); 
									gotoxy(38, 12); puts("YOU WIN"); 
									gotoxy(1, 25); printf("Press any key to return to main menu..");
									break;
								}
							}break;
							
					case 75: if(ycol > 1) //left arrow
							 {
								gotoxy(ycol, yrow); putch(' ');
								ycol--;
								gotoxy(ycol, yrow); putch('Y');
							 } break;
					case 77: if(ycol < 80) //right arrow
							 {
								gotoxy(ycol, yrow); putch(' ');
								ycol++;
								gotoxy(ycol, yrow); putch('Y');
							 } break;
							 
					case 'L': 
					case 'l': goto cheatcode;
				}
			}
		}
	} while(xrow < 24);
	if(xrow == 24)
	{
		clrscr();
		gotoxy(36, 12);
		puts("GAME OVER");
		gotoxy(44, 12);
		gotoxy(1, 25);
		printf("Press any key to return to main menu..");
	}
	if(ch == 'L')
	{
		cheatcode: clrscr(); gotoxy(38, 12); puts("YOU WIN"); gotoxy(1, 25); printf("Press any key to return to main menu..");
	}
	getch();
}
