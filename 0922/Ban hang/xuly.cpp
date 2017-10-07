#include<conio.h>
#include<iostream>
#include<stdio.h>
#include<string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include<iostream>
#include<stdio.h>
using namespace std;
class Hang
{
	private:
		char mahang[20];
		char tenhang[20];
		char tenNSX[20];
		char sl[20];
		char giaban[20];
		int sl1;
		int gb1;
		public:
			void nhap();
			void xuat();
};
class CuaHang
{
	private:
		char n[20];
		int val1;
		char tencuahang[20];
		char diachi[20];
		Hang *hang;
		public:
			void nhap();
			void xuat();
};
void Hang::nhap()
{
	do
	{
		cout<<"\n\t Nhap ma hang :";
		fflush(stdin);
		gets(mahang);
		if(strcmp(mahang,"")==0)
			{
			cout<<"\n\tKhong duoc de chong ";
			cout<<"\n\t Nhap lai";
			}
	}
	while(strcmp(mahang,"")==0);
	//	cout<<"Nhap lai";
	do
	{
		cout<<"\n\t Nhap ten hang :";
		fflush(stdin);
		gets(tenhang);
		if(strcmp(tenhang,"")==0)
			{
			cout<<"\n\tKhong duoc de chong ";
			cout<<"\n\t Nhap lai";
			}
	}
	while(strcmp(tenhang,"")==0);
	do
	{
		cout<<"\n\t Nhap ten nha san xuat :";
		fflush(stdin);
		gets(tenNSX);
		if(strcmp(tenNSX,"")==0)
			{
				cout<<"\n\tKhong duoc de chong ";
				cout<<"\n\t Nhap lai";
			}
	}
	while(strcmp(tenNSX,"")==0);
	do
	{
		cout<<"\n\t So luong :";
		fflush(stdin);
		gets(sl);
		std::cin.clear();
		sl1 = atoi(sl);
			if(sl1==0)
				{
					cout<<"\n\t Nhap lai ";
				}
	}
	while(sl1<1);
	do
	{
		cout<<"\n\t Nhap gia ban :";
		fflush(stdin);
		gets(giaban);
		std::cin.clear();
		gb1=atoi(giaban);
		if(gb1==0)
			{
				cout<<"\n\t Nhap lai ";
			}
	}
	while(gb1<1);
}
void Hang::xuat()
{
	cout<<"\n\t Ma hang :"<<mahang;
	cout<<"\n\t Ten hang :"<<tenhang;
	cout<<"\n\t Ten NSX :"<<tenNSX;
	cout<<"\n\t So luong :"<<sl;
	cout<<"\n\t Gia ban :"<<giaban;
}
void CuaHang::nhap()
{
	hang =new Hang[20];
	do
	{
		cout<<"\n Nhap ten cua hang :";
		fflush(stdin);
		gets(tencuahang);
		if(strcmp(tencuahang,"")==0)
			{
				cout<<"\n\tKhong duoc de chong ";
				cout<<"\n\t Nhap lai";
			}
	}
	while(strcmp(tencuahang,"")==0);
	do
	{
		cout<<"\n Dia chi cua hang :";
		fflush(stdin);
		gets(diachi);
		if(strcmp(diachi,"")==0)
			{
				cout<<"\n\tKhong duoc de chong ";
				cout<<"\n\t Nhap lai";
			}
	}
	while(strcmp(diachi,"")==0);
	
	do
	{
		cout<<"\n \tSo mat hang 0<n<10 :";
		fflush(stdin);
		gets(n);
		std::cin.clear();
		 val1 = atoi(n);
		 if(val1==0||val1>10)
			 {	 
				cout<<"\n\t Nhap lai ";
			}
	}
	while(val1<1||val1>10);
	for(int i=0;i<val1;i++)
	{
		cout<<"\nHang thu :"<<(i+1)<<endl;
		hang[i].nhap();
		cout<<"\n\t---------------------------";
	}
	
}

void CuaHang::xuat()
{
	cout<<"\n\t Ten cua hang :"<<tencuahang;
	for(int i=0;i<val1;i++)
	{   cout<<"\n\t Thong tin hang thu :"<<(i+1)<<endl;
		hang[i].xuat();
		cout<<"\n\t****************";
	}
}
int main()
{
	

	cout<<"\n\t Thong tin ve cua hang nam 2017";
	cout<<"\n\t *******************************";
	int y=0;
	char x[20];
	int val;
	cout<<"\n\t Chuc nang chinh (3:Thoat, 1:Nhap)";
	do
	{
		cout<<"\n\t Nhap lua chon  :";
		fflush(stdin);
		gets(x);
		std::cin.clear();
		 val = atoi(x);
		switch(val)
			{
				case 3:
					exit(0);
				break;
				case 0:
					do
						{
								cout<<"\n\t Ban da nhap gia tri khong dung";
								cout<<"\n\t Nhap lai ";
								std::cin.clear();
								 val = atoi(x);
						} 
					while(val!=0);
				break;
				case 1:
					CuaHang h;	
					h.nhap();
					cout<<"\n\t Thong tin vua nhap";
					h.xuat();
				break;
				default:
					cout<<"\n\t Nhap lai";
					break;
			}
	}
	while(y==0);
	getch();
}
