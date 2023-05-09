#include <stdio.h>

int main()
{
    int mat[3][3] = {{1, 1, 7}, {3, 1, 2}, {0, 3, 4}};
    int PosX, PosY = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; i < 3; i++)
        {
            int maxX = 0;
            if (mat[i][j] > maxX)
            {
                maxX = mat[i][j];
                PosX, PosY = i, j;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            int minY = 0;
            if (mat[PosX][i] < minY)
            {
                continue;
            }
            else
            {
                break;
            }
        }
    }
}