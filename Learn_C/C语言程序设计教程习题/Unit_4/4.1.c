#include <stdio.h>

int main()
{
    int day = 0;
    scanf_s("%d", &day);
    if (day <= 5)
    {
        return 2;
    }
    else if (5 < day && day <= 10)
    {
        return 5;
    }
    else if (10 < day)
    {
        return 10;
    }

    else if (day > 30)
    {
        return 0;
    }
}