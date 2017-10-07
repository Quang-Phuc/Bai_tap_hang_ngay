#include "hear.h"
int main()
{
	

	cout<<"\n\t Thong tin ve cua hang nam 2017";
	cout<<"\n\t *******************************";
	int y=0;
	int x;
	
//	std::cin>>clear();
	do
	{
		cout<<"\n\t Chuc nang chinh (0: thoat, 1:Nhap)";
	cout<<"\n\t Nhap lua chon  :";
	cin>>x;
	std::cin.clear();
		
	switch(x)
	{
		case 0:
			exit(0);
			break;
		case 1:
	CuaHang h;	
	h.nhap();
	cout<<"\n\t Thong tin vua nhap";
	h.xuat();
	break;
	default:
		cout<<"\n\t Nhap lai";
	}
	}
	while(y==0);
	getch();
}
