#include "hear.h"
void Hang::nhap()
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
	cout<<"\n Nhap ten cua hang :";
	fflush(stdin);
	gets(tencuahang);
	cout<<"\n Dia chi cua hang :";
	fflush(stdin);
	gets(diachi);
	cout<<"\n Thong tin ve hang hoa ";
	cout<<"\n \tSo mat hang :";
		cin>>n;
		
	for(int i=0;i<n;i++)
	{
		cout<<"\nHang thu :"<<(i+1)<<endl;
		hang[i].nhap();
		cout<<"\n\t---------------------------";
	}
}

void CuaHang::xuat()
{
	cout<<"\n\t Ten cua hang :"<<tencuahang;
	for(int i=0;i<n;i++)
	{   cout<<"\n\t Thong tin hang thu :"<<(i+1)<<endl;
		hang[i].xuat();
		cout<<"\n\t****************";
	}
}
