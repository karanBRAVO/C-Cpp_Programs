#include <stdio.h>

int main()
{
    int row = 0, col = 0;
    printf("Enter row:");
    scanf("%d", &row);
    printf("Enter column:");
    scanf("%d", &col);

    int m1[row][col];
    int m2[row][col];
    int sum[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("matrix_1[%d][%d]=", i, j);
            scanf("%d", &m1[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("matrix_2[%d][%d]=", i, j);
            scanf("%d", &m2[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }
    printf("\nsumArr=[\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("(%d) ", sum[i][j]);
        }
        printf("\n");
    }
    printf("]");

    return 0;
}