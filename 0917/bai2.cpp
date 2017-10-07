#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class cau
{
	private:
		char c[50];
		public:
			void nhap();
			void nhapds();
			void hien();
			void hiends();
};
void cau::nhap()
{
	
	cout<<"\n\t Nhap cau";
	fflush(stdin);
	gets(c);

}
void nhapds(cau ca[10], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Cau thu"<<(i+1)<<endl;
		ca[i].nhap();
	}
}
void cau::hien()
{
	cin>>c;
}
void hiends(cau ca[10], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\n \t Thong tin";
	}
}
int main()
{
	srand(time(NULL));
	int a = rand() % 10 + 1;
	cout<<a<<"\n";
	int n;
	cau ca[10];
	cout<<"Nhap so cau :";
	cin>>n;
	nhapds(ca,n);
	hiends(ca,n);
	getch();
	
}
