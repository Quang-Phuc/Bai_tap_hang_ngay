#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;
class cau
{
	private:
		char c[50];
		public:
			void nhap();
			void nhapds();
			void hien();
			void thongtin();
			void thongtin2();
};
void cau::nhap()
{
	
	cout<<"\n\t Nhap :";
	fflush(stdin);
	gets(c);

}
void nhapds(cau ca[10], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Cau thu :"<<(i+1)<<endl;
		ca[i].nhap();
	}
}
void cau::hien()
{
	cout<<c<<" ";
}
void thongtin(cau ca[20],int n)
{
	
	for(int i=1;i<=n;i++)
			{
			ca[n-i].hien();
			}
			cout<<"\n";
			for(int i=2;i<=n;i++)
			{
			ca[n-i].hien();
			}
			ca[n-1].hien();
				cout<<"\n";
			for(int i=3;i<=n;i++)
			{
			ca[n-i].hien();
			}
			ca[n-1].hien();
			ca[n-2].hien();
			
			
			cout<<"\n";
			for(int i=4;i<=n;i++)
			{
			ca[n-i].hien();
			}
			ca[n-1].hien();
			ca[n-3].hien();
			ca[n-2].hien();
			
			cout<<"\n";
			int b=n;
			while(b<=n&&b!=0)
			{
			ca[n-b].hien();
			b--;
			}
			
						
}
void thongtin(cau ca[20],int n)
{
	
}
int main()
{
	
	//cout<<a<<"\n";
	int n;
	int y;
	cau ca[10];
	cout<<"Nhap so cau :";
	cin>>n;
	
	nhapds(ca,n);
	cout<<"\n\t So cau muon hien thi (5->10):";
	cin>>y;
		if(y==5)
		{
		
		thongtin(ca,n);
	}
	else
		{
		if(y==6)
		{
		
			thongtin(ca,n);
			cout<<"\n";
			for(int i=5;i<=n;i++)
			{
			ca[n-i].hien();
			}
			ca[n-2].hien();
			ca[n-1].hien();
			ca[n-3].hien();
			ca[n-4].hien();
			
			
			
			
			
		}
		else
			if(y==7)
		{
		thongtin(ca,n);
			cout<<"\n";
			for(int i=5;i<=n;i++)
			{
			ca[n-i].hien();
			}
			ca[n-2].hien();
			ca[n-1].hien();
			ca[n-3].hien();
			ca[n-4].hien();
			cout<<"\n";
			for(int i=5;i<=n;i++)
			{
			ca[n-i].hien();
			}
			ca[n-1].hien();
			ca[n-2].hien();
			ca[n-4].hien();
			ca[n-3].hien();
			cout<<"\n";
			int b=n;
			
			
			}
			else
				if(y==8)
		{
		
		thongtin(ca,n);
			cout<<"\n";
			for(int i=5;i<=n;i++)
			{
			ca[n-i].hien();
			}
			ca[n-2].hien();
			ca[n-1].hien();
			ca[n-3].hien();
			ca[n-4].hien();
			cout<<"\n";
			for(int i=5;i<=n;i++)
			{
			ca[n-i].hien();
			}
			ca[n-1].hien();
			ca[n-4].hien();
			ca[n-2].hien();
			ca[n-3].hien();
			cout<<"\n";
			for(int i=5;i<=n;i++)
			{
			ca[n-i].hien();
			}
			ca[n-1].hien();
			ca[n-2].hien();
			ca[n-4].hien();
			ca[n-3].hien();
			cout<<"\n";
		int b=n;
		
			
			}
			else
				if(y==9)
			{
		
			cout<<"\n";
			for(int i=5;i<=n;i++)
			{
			ca[n-i].hien();
			}
			ca[n-2].hien();
			ca[n-1].hien();
			ca[n-3].hien();
			ca[n-4].hien();
			cout<<"\n";
			for(int i=5;i<=n;i++)
			{
			ca[n-i].hien();
			}
			ca[n-1].hien();
			ca[n-4].hien();
			ca[n-2].hien();
			ca[n-3].hien();
			cout<<"\n";
			for(int i=5;i<=n;i++)
			{
			ca[n-i].hien();
			}
			ca[n-2].hien();
			ca[n-4].hien();
			ca[n-1].hien();
			ca[n-3].hien();
			cout<<"\n";
			for(int i=5;i<=n;i++)
			{
			ca[n-i].hien();
			}
			
			ca[n-1].hien();
			ca[n-2].hien();
			ca[n-4].hien();
			ca[n-3].hien();
			cout<<"\n";
			int b=n;
		
			}
			else
				if(y==10)
		{
		
			
		
		thongtin(ca,n);
			cout<<"\n";
			for(int i=5;i<=n;i++)
			{
			ca[n-i].hien();
			}
			ca[n-2].hien();
			ca[n-1].hien();
			ca[n-3].hien();
			ca[n-4].hien();
			cout<<"\n";
			for(int i=5;i<=n;i++)
			{
			ca[n-i].hien();
			}
			ca[n-1].hien();
			ca[n-4].hien();
			ca[n-2].hien();
			ca[n-3].hien();
			cout<<"\n";
			for(int i=5;i<=n;i++)
			{
			ca[n-i].hien();
			}
			ca[n-2].hien();
			ca[n-4].hien();
			ca[n-1].hien();
			ca[n-3].hien();
			cout<<"\n";
			for(int i=5;i<=n;i++)
			{
			ca[n-i].hien();
			}
			
			ca[n-1].hien();
			ca[n-2].hien();
			ca[n-4].hien();
			ca[n-3].hien();
				cout<<"\n";
			for(int i=5;i<=n;i++)
			{
			ca[n-i].hien();
			}
			
			ca[n-1].hien();
			ca[n-3].hien();
			ca[n-4].hien();
			ca[n-2].hien();
			cout<<"\n";
			int b=n;
		}
			else
			{
				cout<<"Khong cho phep";
			}
		}
	getch();
	
}
