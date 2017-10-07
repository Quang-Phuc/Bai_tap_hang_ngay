#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<dos.h>
//#include"button.ta"
#include<iostream>
//#include"mouse.inc"
#include<conio.h>
#define MV_LBUTTON 1
#define MV_RBUTTON 2
#define MV_BBUTTON 3
typedef struct
{
    int xbutton;
    int ybutton;
    char *name;
    int statusbutton;
}Button;
class Mouse
{
    private:
    Button BUTTON1,BUTTON2;
    public:
    void Show();
    void EnterClick();
    int Click();
    void Program();
    void Menu();
};
void Mouse::Show()
{
    int x=20,y=10;
    gotoxy(25,5); textcolor(10);
    cprintf("YOU HAS TWO BUTTON");
    VarButton(BUTTON1,"[   BUTTON1   ]",x,y);
    VarButton(BUTTON2,"[   BUTTON2   ]",x+20,y);
    ShowButton(BUTTON1);
    ShowButton(BUTTON2);
}
