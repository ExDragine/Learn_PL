#include <stdio.h>
#include <string.h>

int main()
{
    char c[] = "china", *p;
    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] < c[i + 1])
        {
            p = &c[i + 1];
        }
    }
    printf("%s\n", p);
    return 0;
}