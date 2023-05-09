#include <stdio.h>

int cycle(int *p)
{
    int *number = p - 1;
    while (1)
    {
        for (int i = 0; i < 10; i++)
        {
            *number + 3;
        }
    }
    return number;
}

int main()
{
    int team[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int num = cycle(*team);
}