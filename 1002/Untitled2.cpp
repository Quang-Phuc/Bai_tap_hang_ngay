#include<bits/stdc++.h>
#include <dos.h>
#include <stdio.h>
#include <conio.h>
#include<windows.h>
#include <unistd.h>
#include <iostream>
#include<string.h>
#include<time.h>
#include <windows.h>
using namespace std;

void gotoXY (int column, int line)//Chay den toa do x,y
{
	COORD coord;
	coord.X = column;
	coord.Y = line;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
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
enum TrangThai{UP,RIGHT,LEFT,DOWN};
struct ToaDo
{
	int x,y;
};
struct Ran
{
	ToaDo dot[50];
	int n;
	TrangThai tt;
};
void KhoiTao(Ran &ran)
{

	ran.n=1;
	ran.dot[0].x=0;
	ran.dot[0].y=0;
	ran.tt=RIGHT;	
}
void HienThi(Ran ran)
{
	clrscr();
	for(int i=0;i<ran.n;i++)
	{
	gotoXY(ran.dot[i].x, ran.dot[i].y);
	cout<<"*";
	}
	
}


void DieuKhien(Ran &ran)
{
	for(int i=ran.n-1;i>0;i--)
	ran.dot[i]=ran.dot[i-1];
	if(kbhit())
			{
			
				int bam=_getch();
				if(bam=='A'||bam=='a')
					ran.tt=LEFT;
				else	if(bam=='D'||bam=='d')
				
					ran.tt=RIGHT;
			
				else if(bam=='W'||bam=='w')
			
					ran.tt=UP;
			
			else	if(bam=='S'||bam=='s')
			
					ran.tt=DOWN;
			
			}
	if(ran.tt==DOWN)
			ran.dot[0].y++;
	else if(ran.tt==UP)
			ran.dot[0].y--;
	else if(ran.tt==LEFT)
					ran.dot[0].x--;
	else if(ran.tt==RIGHT)
				ran.dot[0].x++;
}
int main()
{//Hien thi
	Ran ran;
	KhoiTao(ran);
	while(1)
	{
		HienThi(ran);
		// dieu khien
		DieuKhien(ran);
		sleep(200);
	}
	return 0;
	
}
