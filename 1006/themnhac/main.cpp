#include <iostream>
#include <windows.h>
#include <mmsystem.h>
using namespace std;

int main(){
    //PlaySound(TEXT("mywavsound.wav"), NULL, SND_FILENAME); - My erroring code
    //PlaySound(TEXT("mywavsound.wav"), NULL, SND_FILENAME | SND_ASYNC);// - the correct code
PlaySound(TEXT("a.wav"), NULL, SND_FILENAME | SND_ASYNC);
    int test = 0;
    cin>>test;
    return 0;
}
