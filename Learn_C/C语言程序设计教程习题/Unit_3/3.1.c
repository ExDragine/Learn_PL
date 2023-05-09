#include <stdio.h>

int main()
{
    float Distance = 0;
    scanf_s("%f", &Distance);
    printf("%f,%f,%f,%f", Distance * 1000, Distance * 0.3937 * 1000000, Distance * 0.3937, Distance * 1000000);
    return 0;
}