#include <stdio.h>
#include <math.h>

#define PI 3.1415926

int main()
{
    int k = 0;
    float r = 0;
    scanf_s("%d%f", &k, &r);
    switch (k)
    {
    case 1:
        printf_s("%f", pow(r, 2.0) * PI);
    case 2:
        printf_s("%f", r * 2 * PI);
    case 3:
        printf_s("%f,%f", pow(r, 2.0) * PI, r * 2 * PI);
    default:
        break;
    }
    return 0;
}