#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;
class tinh
{
	private:
		float a,b;
	public:
		tinh(float ax, float bx);
		tinh(float, int );
		tinh(int ax, int by, int cz);
		void nhapa();
		void nhapb();
		void tong(float a,float b);
		void hieu(float a,float b);
		void thuong(float a,float b);
		void tich(float a,float b);
};