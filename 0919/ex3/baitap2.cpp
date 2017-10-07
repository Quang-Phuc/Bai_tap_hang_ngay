#include "bai.h"


tinh::tinh(float ax,  float bx)
{
	a = ax;
	b = bx;
}

tinh::tinh(int ax, int by, int cz)
{
	a = ax + by;
	b = ax + cz - by;
}

tinh::tinh(float, int)
{
	a = 0;
	b = 1;
	
}


void tinh::tong(float a,float b)
{
	float c=a+b;
}
void tinh::hieu(float a,float b)
{
	float d=a-b;
}
void tinh::thuong(float a,float b)
{
	float e=a/b;
}
void tinh::tich(float a,float b)
{
	float c=a*b;
}

void tinh::nhapa()
{
	cin>> tinh::a;
}

void tinh::nhapb()
{
	cin>> tinh::b;
}
int main()
{
	
	tinh t(2,4,5);
	cout<<"\n\t Nhap a :";
	t.nhapa();
	
	cout<<"\n\t Nhap b :";
	t.nhapb();
	
	//t.tong();
	//t.hieu();
	//t.thuong();
	//t.tich();
	getch();
	
}