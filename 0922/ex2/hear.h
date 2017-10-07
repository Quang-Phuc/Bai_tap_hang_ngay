#include<conio.h>
#include<iostream>
#include<stdio.h>
using namespace std;
class Hang
{
	private:
		char mahang[20];
		char tenhang[20];
		char tenNSX[20];
		int sl;
		int giaban;
		public:
			void nhap();
			void xuat();
};
class CuaHang
{
	private:
		int n;
		char tencuahang[20];
		char diachi[20];
		Hang *hang;
		public:
			void nhap();
			void xuat();
};
