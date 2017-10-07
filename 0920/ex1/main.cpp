#include "hear.h"

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
	ch[n].nhapds(ch[20],n);
	ch[n].hiends(ch[20],n);
	break;
	default:
		cout<<"\n\t Chon lai";
	}
}

while(x==0);
	getch();
}
