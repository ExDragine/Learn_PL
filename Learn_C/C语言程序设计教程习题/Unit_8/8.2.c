#include <stdio.h>

int len(char *c)
{
    char *p;
    int strlen;
    for (p = c; *p != '\0'; p++)
    {
        strlen++;
    }
    return strlen;
}
int main()
{
    char c;
    c = getchar();
    len(&c);
    return 0;
}