#include <iostream>
#include<windows.h>
#include "mmsystem.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	PlaySound(TEXT("a.wav"), NULL, SND_SYNC );
	return 0;
}`
