#include <stdio.h>
#include <string.h>

int main()
{
    char c[200][5];
    int larger = 0;
    for (int i = 0; i < 200; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            c[i][j] = getchar();
        }
        if (i > 0)
        {
            if (strcmp(c[i - 1], c[i]) > 0)
            {
                larger = i - 1;
            }
            else
            {
                larger = i;
            }
        }
    }
    printf_s("%c", c[0][larger]);
    return 0;
}