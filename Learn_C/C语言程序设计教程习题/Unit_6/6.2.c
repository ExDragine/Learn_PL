#include <stdio.h>

#define SIZE 10

int main()
{
    int raw[SIZE] = {1, 2, 3, 4, 5, 6, 6, 8, 9, 10};
    raw[7] = 7;
    for (int i = 7; i < SIZE; i++)
    {
        int min = i;
        for (int j = 7; j < SIZE; j++)
        {
            if (j < min)
            {
                int temp = min;
                min = j;
                raw[j] = temp;
            }
        }
    }
}