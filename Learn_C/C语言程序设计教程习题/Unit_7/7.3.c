#include <stdio.h>

#define SIZE 10

char RC(char c[])
{
    char ct[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        ct[i] = c[SIZE - i];
    }
}

int main()
{
    char c[SIZE];
    gets_s(c, SIZE);
}