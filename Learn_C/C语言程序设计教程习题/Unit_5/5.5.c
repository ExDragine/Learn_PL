#include <stdio.h>

int main()
{
    int peach = 1;
    for (int i = 10; i > 1; i--)
    {
        peach = (peach + 1) * 2;
    }
    printf_s("%d", peach);
    return 0;
}