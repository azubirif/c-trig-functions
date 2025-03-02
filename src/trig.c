#include "trig.h"
#include<math.h>

int fact(int x)
{
    int prod = 1;
    for (int i = 1; i <= x; i++)
    {
        prod *= i;
    }
    return prod;
}

double sin(double x)
{
    if (x > 2*PI)
    {
        double current = x;
        while (current > 2*PI)
        {
            current -= 2*PI;
        }
        return sin(current);
    }
    if (x < 0) return -sin(-x);

    double sum = 0;
    for (int i = 1; i < 14; i++)
    {
        sum += (pow(-1,2*i+1)*pow(x,2*i+1))/fact(2*i+1);
    }

    return -sum;
}

double cos(double x)
{
    return sin(x + PI/2);
}

double tan(double x)
{
    return sin(x)/cos(x);
}
