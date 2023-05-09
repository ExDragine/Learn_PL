#include <stdio.h>
#include <math.h>

int main()
{
    for (int i = 0; i < 1001; i++)
    {
        if (i == pow(i / 100, 3.0) + pow(i / 10 % 10, 3.0) + pow(i % 100, 3.0))
        {
            printf_s("%d", i);
        }
    }
}