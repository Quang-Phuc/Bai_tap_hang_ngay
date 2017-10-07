// main.c
#include <stdio.h>
#include "phuc.h"
int main()
{
        double d = 100;
        printf("Using libphuc ------->    sqrt(%3.0f)=%2.0f\n",d,calcSqrt(d));
        return 0;
}