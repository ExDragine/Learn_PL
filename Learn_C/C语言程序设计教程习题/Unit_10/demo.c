#include <stdio.h>
#include <stdlib.h>

struct clientData
{
    long acctNum;
    char acctName[255];
    long balance;
};

int main()
{
    FILE *cfPtr;
    long i;
    struct clientData blankClient = {0, "", 0};
    if ((cfPtr = fopen("credit.dat", "wb")) == NULL)
    {
        printf_s("File open failed");
        exit(0);
    }
    for (i = 1; i <= 1000000; i++)
    {
        fwrite(&blankClient, sizeof(struct clientData), 1, cfPtr);
        fclose(cfPtr);
    }
}