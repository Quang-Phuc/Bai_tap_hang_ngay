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
#define Consolewith 85
#define Consoleheight 25
void gotoXY (int column, int line)//Chay den toa do x,y
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
enum TrangThai{DOWN,UP,LEFT,RIGHT};
struct Chuchay
{
	char s[20];
	int y,x;
	TrangThai tt;
};
int main()
{
	Chuchay A;
	strcpy(A.s,"Lam Quang Phuc");
	A.x=((Consolewith-strlen(A.s))/2);
	A.y=0;
	A.tt=DOWN;
	srand(time(NULL));
	while(1)
	{
		system("cls");
		gotoXY (A.x,A.y);
		TextColor(8+rand()%8);
		cout<<A.s;
		if(A.y==Consoleheight-1)
			A.tt=UP;
		else
			if(A.y==0)
			A.tt=DOWN;
			else
			if(A.x==0)
			A.tt=RIGHT;
			else
				if(A.x==Consolewith-1)
				A.tt==LEFT;
			
			
			if(kbhit())
			{
				char bam;
				bam=_getch();
				if(bam=='A'||bam=='a')
				{
					A.tt=LEFT;
				}
				if(bam=='D'||bam=='d')
				{
					A.tt=RIGHT;
				}
				if(bam=='W'||bam=='w')
				{
					A.tt=UP;
				}
				if(bam=='S'||bam=='s')
				{
					A.tt=DOWN;
				}
			}
		if(A.tt==DOWN)
			A.y++;
		else 
			if(A.tt==UP)
				A.y--;
				else 
					if(A.tt==LEFT)
					A.x++;
					else
					if(A.tt==RIGHT)
					A.x--;
		
		sleep(0.5);
	}
	
	return(0);
}
