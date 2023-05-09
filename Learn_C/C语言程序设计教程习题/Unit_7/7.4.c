#include <stdio.h>

char vowel(char c[])
{
    char result[10];
    for (int i = 0; i < 10; i++)
    {
        if (c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u')
        {
            result[i] = c[i];
        }
    }
}

int main()
{
    char c[10];
    gets_s(c, 10);
}