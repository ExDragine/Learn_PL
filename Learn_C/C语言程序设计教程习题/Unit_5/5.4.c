#include <stdio.h>
#include <math.h>

int main()
{
    int sum, i = 0;
    do
    {
        for (int i = 0; i < i + 1; i++)
        {
            sum += pow(i, 2.0);
        }
    } while (sum > 1000);
    printf_s("%d", i);
    return 0;
}