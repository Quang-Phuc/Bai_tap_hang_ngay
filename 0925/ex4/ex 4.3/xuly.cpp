#include "hear.h"
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
	cout<<"\n\t So luong :";
	cin>>sl;
	std::cin.clear();
	cout<<"\n\t Nhap gia ban :";
	cin>>giaban;
	std::cin.clear();
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
		cin>>n;
		std::cin.clear();
	for(int i=0;i<n;i++)
	{
		cout<<"\nHang thu :"<<(i+1)<<endl;
		hang[i].nhap();
		cout<<"\n\t---------------------------";
	}
	}
	while(n<0||n>10);
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

