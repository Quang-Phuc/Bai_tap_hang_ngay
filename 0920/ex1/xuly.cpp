#include "hear.h"
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