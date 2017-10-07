#include<conio.h>
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
class Pt1
{
	private:
		float a,b;
		public:
			void nhap();
			void tinh_pt1();
};
void Pt1::nhap()
{
	cout<<"\n \t Nhap a :";
	cin>>a;
	cout<<"\n\t Nhap b:";
	cin>>b;
}
void Pt1::tinh_pt1()
{
	float x=-b/a;
	cout<<"\n\t Nghiem x ="<<x;
}

 class Pt2
{
	private:
		float a1,b1,c1;
		public:
			void nhap();
			void tinh();
};
void Pt2::nhap()
{
	cout<<"\n\t Nhap a :";
	cin>>a1;
	cout<<"\n\t Nhap b :";
	cin>>b1;
	cout<<"\n\t Nhap c :";
	cin>>c1;
}
void Pt2::tinh()
{
	if(a1!=0)
	{
		float D;
		D=b1*b1-4*a1*a1;
		if(D<0)
		{
			cout<<"\n \t Phuong trinh vo nghiem ";
		}
		else
			if(D==0)
			{
				float x1=-b1/(2*a1);
				cout<<"\n\t  Nghiem kep x= "<<x1;
			}
			else
			{
				float x2=(-b1+sqrt(D))/2*a1;
				float x3=(-b1-sqrt(D))/2*a1;
				cout<<"\n\t x1"<<x2;
				cout<<"\n \t x2"<<x3;
				
			}
	}
}
int main()
{ int n;
	cout<<"\t \t \t \t  Chao mung ban da den voi chuong trinh ";
	cout<<"\n \t \t \t \t --------------------------------------";
	cout<<"\n Xin moi lua chon cac chuc nang ";
	cout<<"\n O Thoat     1 Giai phuong trinh bac 1             2 Giai phuong trinh bac 2              3 Loi chao";
	do
	{
	cout<<"\n Moi chon :";
	cin>>n;
	
}
while(n<0||n>3);
{
switch(n) {
	case 0:
		exit(0); 
	
   case 1  :
      Pt1 pt1;
	pt1.nhap();
	pt1.tinh_pt1();
	break;
	case 2:
		Pt2 pt2;
		pt2.nhap();
		pt2.tinh();
      break;
 	 case 3:
  	cout<<"Chao tat ca cac ban";
  	break;
	 default :
      cout << "Gia tri khong hop le" << endl;
 	 return 0;
}
}

		getch();
}
