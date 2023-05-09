#include <stdio.h>

int main()
{
    int n = 0;
    float sum = 0;
    scanf_s("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        sum *= i;
    }
    return 0;
}