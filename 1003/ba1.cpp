#include<Windows.h>
#include <stdio.h>
#include<iostream>
#include<conio.h>
#include<time.h>
#include "console.h"
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
enum TrangThai{UP,DOWN,LEFT,RIGHT};

struct ToaDo
{
	int y,x;
};

struct HoaQua
{
	ToaDo td;
};

struct Snake
{
	ToaDo dot[30];
	int n;
	TrangThai tt;
};

void KhoiTao(Snake &snake,HoaQua &hq)
{

	snake.n = 1;
	snake.dot[0].x=0;
	snake.dot[0].y=0;
	snake.tt=RIGHT;	
	hq.td.x=10;
	hq.td.x=10;
}
void HienThi(Snake snake,HoaQua hq)
{
clrscr();
for(int i=0;i<=28;i++)
{
	gotoXY(25,i);
	putchar(179);
}
gotoXY (hq.td.x,hq.td.y);
putchar('A');
for(int i=0;i<snake.n;i++)
	{
	gotoXY (snake.dot[i].x, snake.dot[i].y);
	putchar('*');
	}	
}

void DieuKien_DiChuyen(Snake &snake)
{
	for(int i=snake.n - 1; i>0;i--)
	snake.dot[i]=snake.dot[i-1];
	
	if(kbhit())
	{
		int key=_getch();
		if(key=='A'||key=='a'||key==75)
			snake.tt=LEFT;
		else if(key=='D'||key=='d'||key==77)	
			snake.tt=RIGHT;
		else if(key=='W'||key=='w'||key==72)
			snake.tt=UP;
		else if(key=='S'||key=='s'||key==80)
			snake.tt=DOWN;
	}
	if(snake.tt==UP)
		snake.dot[0].y--;
	else if(snake.tt==DOWN)
		snake.dot[0].y++;
	else if(snake.tt==LEFT)
		snake.dot[0].x--;
	else if(snake.tt==RIGHT)
		snake.dot[0].x++;
		
}
int XuLy(Snake &snake,HoaQua &hq)
{
	if(snake.dot[0].x==hq.td.x&&snake.dot[0].y==hq.td.y)
	{
		// a hoa qua
		for(int i=snake.n;i>0;i--)
		snake.dot[i]=snake.dot[i-1];
		snake.n++;
		
		if(snake.tt==UP)
		snake.dot[0].y--;
	else if(snake.tt==DOWN)
		snake.dot[0].y++;
	else if(snake.tt==LEFT)
		snake.dot[0].x--;
	else if(snake.tt==RIGHT)
		snake.dot[0].x++;
		hq.td.x=rand()%consoleWidth;
		hq.td.y=rand()%consoleHeight;
		
	}
	if(snake.dot[0].x<0||snake.dot[0].x>25||snake.dot[0].y<0||snake.dot[0].y>25)
	return -1;
	for(int i=1;i<snake.n;i++)
		if(snake.dot[0].x==snake.dot[i].x&&snake.dot[0].y==snake.dot[i].y)
		return -1;
}

int main()
{
		srand(time(NULL));//khoi tao sinh so ngau nhien
		Snake snake;
		HoaQua hq;
		KhoiTao(snake,hq);
		int ma;
	
	while(1)
	{
		TextColor(8+rand()%8);
		HienThi(snake,hq);
		DieuKien_DiChuyen(snake);
		//xu ly
		ma=	XuLy(snake,hq);
		if(ma==-1)
		{
		//	gotoXY(consoleWidth +1,10);
			cout<<"\n\t Ban thua roi";
			while(_getch()!=13);
			break;
		}
		Sleep(200);
	}
	
	return 0;
}
