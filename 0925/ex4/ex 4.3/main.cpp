#include "hear.h"
int main()
{
	
		CuaHang *h;
		c= new CuaHang[n];

	cout<<"\n\t Thong tin ve cua hang nam 2017";
	cout<<"\n\t *******************************";
	int y=0;
	int x;
	cout<<"\n\t Chuc nang chinh (0: thoat, 1:Nhap)";
	//cin>>clear(x);
	
	do
	{
		cout<<"\n\t Nhap lua chon  :";
	cin>>x;
	//cin>>clear(x);
	std::cin.clear();
	switch(x)
	{
		case 0:
			exit(0);
			break;
		case 1:

	h.nhap();
	cout<<"\n\t Thong tin vua nhap";
	h.xuat();
	break;
	default:
		cout<<"\n\t Nhap lai";
	break;
	}	}
	while(y==0);
	getch();
}
