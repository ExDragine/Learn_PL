#include <stdio.h>

int main()
{
    float hWage, hWorked, pay = 0;
    scanf_s("%f%f", &hWage, &hWorked);
    printf("资本家榨取的剩余价值为:%f", hWage * hWorked);
}