#include<conio.h>
#include<iostream>
#include<stdio.h>
using namespace std;
class Cuahang
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
			void nhapds(Cuahang ch[20], int n);
			void hiends(Cuahang ch[20], int n);
};