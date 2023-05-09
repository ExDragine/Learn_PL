#include <stdio.h>
#include <string.h>

int main()
{
    char c[100];
    char c_m[100];
    gets(c);
    for (int i = strlen(c); i > 0; i--)
    {
        for (int j = 0; j < strlen(c); j++)
        {
            if (i == 50)
                break;
            c_m[j] = c[i];
        }
    }
    if (strcmp(c, c_m) == 0)
    {
        printf_s("YES");
    }
    return 0;
}