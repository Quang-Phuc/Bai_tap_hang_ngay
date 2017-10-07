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
			void nhapds();
			void hiends();
};
void Cuahang::nhap()
{
	cout<<"\n\t Nhap ma hang :";
	fflush(stdin);
	gets(mahang);
	cout<<"\n\t Nhap ten hang :";
	fflush(stdin);
	gets(tenhang);
	cout<<"\n\t Nhap ten nha san xuat :";
	fflush(stdin);
	gets(tenNSX);
	cout<<"\n\t So luong :";
	cin>>sl;
	cout<<"\n\t Nhap gia ban :";
	cin>>giaban;
}
void Cuahang::xuat()
{
	cout<<"\n\t Ma hang :"<<mahang;
	cout<<"\n\t Ten hang :"<<tenhang;
	cout<<"\n\t Ten NSX :"<<tenNSX;
	cout<<"\n\t So luong :"<<sl;
	cout<<"\n\t Gia ban :"<<giaban;
}
void nhapds(Cuahang ch[20], int n)
{
	cout<<"\n\t Nhap danh sach "<<n<<" mat hang ";
	for(int i=0;i<n;i++)
	{
		cout<<"\n \t Mat hang thu :"<<(i+1)<<endl;
		ch[i].nhap();
	}
}
void hiends(Cuahang ch[20], int n)
{
	cout<<"Danh sach vua nhap";
	for(int i=0;i<n;i++)
	{
		ch[i].xuat();
		cout<<"\n\t------------";
	}
}
int main()
{
	int n;
	int x=0;
	Cuahang ch[20];
	cout<<"\t\t\tChuong trinh nhap hang hoa :";
	cout<<"\n\t\t\t-----------------------------";
	do
	{

	cout<<"\n\t 0:thoat       1:quang ly hang hoa";
	int y;
	cout<<"\n\t Moi lua chon :";
	cin>>y;
	switch(y)
	{
		case 0:
			exit(0);
			break;
			case 1:
				do
	{
		cout<<"So mat hang 0<n<10 :";
		cin>>n;
	}
	while(n<0||n>9);
	nhapds(ch,n);
	hiends(ch,n);
	break;
	default:
		cout<<"\n\t Chon lai";
	}
}

while(x==0);
	getch();
}