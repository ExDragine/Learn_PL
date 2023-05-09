#include <stdio.h>

int main()
{
    char c;
    int english, number;
    while (1)
    {
        c = getchar();
        if (c == "\n")
        {
            break;
        }
        if ("0" <= c && c <= "9")
        {
            number++;
        }
        else
        {
            english++;
        }
    }
    return 0;
}