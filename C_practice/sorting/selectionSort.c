#include <stdio.h>

void selectionSort(int *arr, int arrLen);
void swap(int *arr, int x, int y);
void arrayTraversal(int *arr, int arrLen);

int main()
{
    int g_arr[] = {34, 45, 1, 23, 100, 234, 4, 55, 20};
    int arrLen = sizeof(g_arr) / sizeof(g_arr[0]);
    printf("--- Selection Sorting ---");
    selectionSort(g_arr, arrLen);

    return 0;
}

void selectionSort(int *arr, int arrLen)
{
    for (int j = 0; j < arrLen; j++)
    {
        for (int i = j + 1; i < arrLen; i++)
        {
            if (arr[j] > arr[i])
            {
                swap(arr, j, i);
            }
        }
    }

    arrayTraversal(arr, arrLen);
}

void swap(int *arr, int x, int y) {
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

void arrayTraversal(int *arr, int arrLen)
{
    for (int k = 0; k < arrLen; k++)
    {
        printf("\narr[%d]=%d", k + 1, arr[k]);
    }
}