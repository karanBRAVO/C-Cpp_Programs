#include<stdio.h>

int main() {
    int row, col;
    printf("Enter row:");
    scanf("%d", &row);
    printf("Enter column:");
    scanf("%d", &col);

    int matrix[row][col];
    int matrix_Transpose[row][col];

    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            printf("matrix[%d][%d]:", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nGiven Array = [\n");
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            printf("(%d) ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("]");

    printf("\nTranspose = [\n");
    for(int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            matrix_Transpose[i][j] = matrix[j][i];
            printf("(%d) ", matrix_Transpose[i][j]);
        }
        printf("\n");
    }
    printf("]");

    return 0;
}