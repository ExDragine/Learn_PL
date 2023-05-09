#include <stdio.h>

int main()
{
    int num = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf_s("%d", &num);
        for (int j = 0; j < num; j++)
        {
            printf_s("*");
        }
    }
    return 0;
}