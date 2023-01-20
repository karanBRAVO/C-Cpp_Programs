#include <stdio.h>

int main()
{
    int row1, col1, row2, col2;
    printf("enter row(m1):");
    scanf("%d", &row1);
    printf("enter col(m1):");
    scanf("%d", &col1);
    printf("enter row(m2):");
    scanf("%d", &row2);
    printf("enter col(m2):");
    scanf("%d", &col2);

    if (col1 == row2)
    {
        int m1[row1][col1];
        int m2[row2][col2];
        int mul[row1][col2];

        printf("\n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                printf("matrix_1[%d][%d]:", i, j);
                scanf("%d", &m1[i][j]);
            }
        }
        printf("\n");
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                printf("matrix_2[%d][%d]:", i, j);
                scanf("%d", &m2[i][j]);
            }
        }

        for (int i = 0; i < row1; i++)
        {
            int sum = 0;
            for (int k = 0; k < col2; k++)
            {
                for (int j = 0; j < col1; j++)
                {
                    sum += m1[i][j] * m2[j][i];
                }
                mul[i][k] = sum;
            }
        }

        printf("\nmulArr=[\n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                printf("(%d) ", mul[i][j]);
            }
            printf("\n");
        }
        printf("]");
    }
    else
    {
        printf("ERROR!");
    }

    return 0;
}