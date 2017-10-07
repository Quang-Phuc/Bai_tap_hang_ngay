#include <stdio.h>
#include<stdlib.h>
#include<iostream>
#include<windows.h>
#include<bits/stdc++.h>
#include <dos.h>
#include <stdio.h>
#include <conio.h>
#include<windows.h>
#include <unistd.h>
#include <iostream>
using namespace std;
int main()
{
	char s[]="lam quang phuc";
	int dong=0;
	while(1)
	{
		system("cls");
		for(int i=0;i<dong;i++)
		cout<<"\n";
		//cout<<"%s"<<s;
		printf("%s",s);
		dong++;
		sleep(400);
	}
	return 0;
	}
