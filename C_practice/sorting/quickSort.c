#include <stdio.h>
#include <stdlib.h>

void quickSort(int *arr, int arrLen, int pivot);
void arrayTraversal(int *arr, int arrLen);

int main()
{
    int g_arr[] = {39, 9, 3, 20, 400, 95, 29, 30, 69, 10};
    int arrLen = sizeof(g_arr) / sizeof(g_arr[0]);
    printf("--- Quick Sort ---");
    quickSort(g_arr, arrLen, arrLen - 1);
    arrayTraversal(g_arr, arrLen);
    return 0;
}

void quickSort(int *arr, int arrLen, int pivot)
{
    if (arrLen <= 1)
    {
        return;
    }

    int *leftArr = (int *)calloc(arrLen, sizeof(int));
    int *rightArr = (int *)calloc(arrLen, sizeof(int));

    if (leftArr == NULL || rightArr == NULL) {
        leftArr = (int *)calloc(arrLen, sizeof(int));
        rightArr = (int *)calloc(arrLen, sizeof(int));
    }

    int ele = arr[pivot];

    int i = 0;
    int j = 0;
    int k = 0;
    while (k < pivot)
    {
        if (arr[k] < ele)
        {
            leftArr[i] = arr[k];
            i += 1;
        }
        else
        {
            rightArr[j] = arr[k];
            j += 1;
        }
        k += 1;
    }

    leftArr = (int *)realloc(leftArr, i * sizeof(int));
    rightArr = (int *)realloc(rightArr, j * sizeof(int));

    int leftArr_len = i;
    int rightArr_len = j;

    quickSort(leftArr, leftArr_len, leftArr_len - 1);
    quickSort(rightArr, rightArr_len, rightArr_len - 1);

    int index = 0;
    if (leftArr_len > 0)
    {
        for (index = 0; index < leftArr_len; index++)
        {
            arr[index] = leftArr[index];
        }
    }
    arr[index] = ele;
    if (rightArr_len > 0)
    {
        for (index = 0; index < rightArr_len; index++)
        {
            arr[leftArr_len + index + 1] = rightArr[index];
        }
    }
    free(leftArr);
    free(rightArr);
}

void arrayTraversal(int *arr, int arrLen)
{
    for (int k = 0; k < arrLen; k++)
    {
        printf("\narr[%d]=%d", k, arr[k]);
    }
}