#include <stdio.h>
#include <stdlib.h>

struct T
{
    int day;
    float temperture;
};

int main()
{
    FILE *pt;
    struct T days = {1, 8.0};
    if ((pt = fopen("temperture.dat", "wb")) == NULL)
    {
        printf_s("FAIL");
        exit(0);
    }
    for (int i = 0; i < 20; i++)
    {
        fwrite(&days, sizeof(struct T), 1, pt);
        fclose(pt);
    }
    fread(&days, sizeof(struct T), 1, pt);
    while (!feof(pt))
    {
        printf_s("%d,%f", days.day, days.temperture);
    }
    fclose(pt);
}