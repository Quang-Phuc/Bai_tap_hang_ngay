#include<Windows.h>
#include <stdio.h>
#include<iostream>
#include<conio.h>
#include<time.h>
//#include "console.h"
#define consoleWidth 25
#define consoleHeight 25;
using namespace std;
//
void clrscr()
{
	CONSOLE_SCREEN_BUFFER_INFO	csbiInfo;                  
	HANDLE	hConsoleOut;
	COORD	Home = {0,0};
	DWORD	dummy;

	hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hConsoleOut,&csbiInfo);

	FillConsoleOutputCharacter(hConsoleOut,' ',csbiInfo.dwSize.X * csbiInfo.dwSize.Y,Home,&dummy);
	csbiInfo.dwCursorPosition.X = 0;
	csbiInfo.dwCursorPosition.Y = 0;
	SetConsoleCursorPosition(hConsoleOut,csbiInfo.dwCursorPosition);
}

void gotoXY (int column, int line)
{
	COORD coord;
	coord.X = column;
	coord.Y = line;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void TextColor (int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE) , color);
}
//
class Ran
{
	private:
		int UP,DOWN,LEFT,RIGHT;
		int x,y,n;
		public:
			void hien();
			void hiends();
			void xuly1();
};

void Ran::hien()
{
	x=0;y=0;
	
		clrscr();
	gotoXY(x,y);
	cout<<"*";
	y++;
	Sleep(200);
	
}
void Ran::xuly1()
{
x=0;y=0;
	do
	{
	
	
	clrscr();
	gotoXY(x,y);
	cout<<"*";
//	y++;
	Sleep(50);
	
	if(kbhit())
	{
	int bam=_getch();
		if(bam=='A'||bam=='a'||bam==75)// gia tri 75 la ky hieu mui ten trai, 77 la mui ten phai, gia tri 72 la mui ten duoi, 80 len
			x--;
		else if(bam=='D'||bam=='d'||bam==77)	
			x++;
		else if(bam=='W'||bam=='w'||bam==72)
			y--;
		else if(bam=='S'||bam=='s'||bam==80)
			y++;
	}
}while(y!=25);
}
int main()
{
	Ran ran;
//	ran.hien();
	ran.xuly1();
	
}
