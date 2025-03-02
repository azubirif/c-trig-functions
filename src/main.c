#include<stdio.h>
#include"trig.h"

int main()
{
    for (int i = 1; i <= 8; i++)
    {
        printf("%f\n", cos(i*PI/8));
    }
}
