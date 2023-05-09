#include <stdio.h>

int main()
{
    int year = 0;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("YES");
    }
    return 0;
}