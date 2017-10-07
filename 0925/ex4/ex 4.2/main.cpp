#include "hear.h"
int main()
{
	int i;
	int n=0;
	chu c;
	do
	{
		switch (n)
		{
			case 1:
				system("color 1");
				sleep(0.5);
				break;
			case 2:
				system("color 2");
				sleep(0.5);
				break;
			case 3:
				system("color 3");
				sleep(0.5);
				break;
			case 4:
				system("color 4");
				sleep(0.5);
				break;
			case 5:
				system("color 5");
				sleep(0.5);
				break;
			case 6:
				system("color 6");
				sleep(0.5);
				break;
			case 7:
				system("color 7");
				sleep(0.5);
				break;
			case 8:
				system("color 8");
				sleep(0.5);
				break;
			case 9:
				system("color 9");
				sleep(0.5);
				break;
			case 10:
				system("color 10");
				sleep(0.5);
				break;			
		}
		n++;
		c.hien();
		sleep(1);
		//delete c.hien();
		system("cls");// xoa man hinh cu
	}
	while(n<6);
	c.hien2();
	sleep(2);
	getch();
}
