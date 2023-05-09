#include <stdio.h>

int GCD(int numA, int numB)
{
    int gcd, small;
    if (numA < numB)
    {
        small = numA;
    }
    else
        small = numB;
    for (int i = small; i > 0; i--)
    {
        if (numA % i == 0 || numB % i == 0)
        {
            gcd = i;
            break;
        }
    }
    return gcd;
}
int LCM(int numA, int numB)
{
    return (numA * numB) / GCD(numA, numB);
}

int main()
{
    int numA, numB;
    scanf_s("%d%d", &numA, &numB);
    printf_s("%d,%d", GCD(numA, numB), LCM(numA, numB));
}