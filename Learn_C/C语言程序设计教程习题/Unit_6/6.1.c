#include <stdio.h>

#define SIZE 10

int main()
{
    int num[SIZE] = {7, 11, 4, 8, 22, 5, 9, 37, 2, 10};
    for (int i = 0; i < SIZE; i++)
    {
        int min = i;
        for (int j = 0; j < SIZE; j++)
        {
            if (j < min)
            {
                int temp = min;
                min = j;
                num[j] = temp;
            }
        }
    }
}