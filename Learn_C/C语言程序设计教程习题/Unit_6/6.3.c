#include <stdio.h>

int main()
{
    int matA[3] = {1, 3, 5};
    int matB[3] = {2, 4, 6};
    int matC[6] = {0};
    for (int i = 0; i < 3; i++)
    {
        int arrA = matA[i];
        for (int j = 1; j < 4; j++)
        {
            int arrB = matB[j];
            if (arrA < arrB)
            {
                matC[i + j] = arrA;
                continue;
            }
            else
            {
                matC[i + j] = arrB;
            }
        }
    }
}