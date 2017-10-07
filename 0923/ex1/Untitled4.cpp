#include <dos.h>
#include <stdio.h>
#include <conio.h>
#include<windows.h>
#include <unistd.h>
#include <iostream>
using namespace std; 
int main()
{
	char a[20];
		cout<<"\n\t Nhap a :";
		for(int i=0;i<5;i++)
		{
			cout<<"\n\t a: ";
			cin>>a[i];
		}
	for(int i=0;i<5;i++)
	{
		
    cout<<a[i];
    sleep(10);
    }
    
    return 0;
}
