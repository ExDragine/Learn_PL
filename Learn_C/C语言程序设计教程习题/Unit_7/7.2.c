#include <stdio.h>
#include <math.h>

#define ROW 2
#define LINE 2

void matT(int *mat[], int *matA[])
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < LINE; j++)
        {
            mat[j][i] = matA[i][j];
        }
    }
}

int main()
{
    int matA[ROW][LINE] = {1, 2, 3, 4};
    int matT[LINE][ROW];
}