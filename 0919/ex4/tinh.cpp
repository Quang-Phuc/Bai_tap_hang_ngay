#include "hear.h"

void Tinh::xuat()
{
	float c=a+b;
	cout<<"\n\t Tong:"<<c;
	float d=a-b;
	cout<<"\n\t Thuong :"<<d;
	float e=a/b;
	cout<<"\n\t Hieu :"<<e;
	float g=a*b;
	cout<<"\n\t Tich :"<<g;
}

void Tinh::nhap()
{
	cout<<"\n\t Nhap a :";
	cin>>a;
	cout<<"\n\t Nhap b :";
	cin>>b;
}

