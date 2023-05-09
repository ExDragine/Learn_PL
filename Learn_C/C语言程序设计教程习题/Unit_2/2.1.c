#include <stdio.h>

int main()
{
    int stuA = 89;
    int stuB = 78;
    int stuC = 90;
    int Sum = stuA + stuB + stuC;
    float Avg = Sum / 3;
    printf_s("%.2f", Avg);
    return 0;
}