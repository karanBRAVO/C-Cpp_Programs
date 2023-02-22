#include <iostream>
#include <stdlib.h>
using namespace std;

void quickSort(int *arr, int arrLen, int pivot);
void arrayTraversal(int *arr, int arrLen);

int main()
{
    int g_arr[] = {34, 456, 20, 39, 49, 100, 399, 202, 199, 93, 1990};
    int arrLen = sizeof(g_arr) / sizeof(g_arr[0]);
    cout << "--- Quick Sort ---" << endl;
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

    int leftArr_length = i;
    int rightArr_length = j;

    quickSort(leftArr, leftArr_length, leftArr_length - 1);
    quickSort(rightArr, rightArr_length, rightArr_length - 1);

    int index = 0;
    if (leftArr_length > 0)
    {
        for (index = 0; index < leftArr_length; index++)
        {
            arr[index] = leftArr[index];
        }
    }
    arr[index] = ele;
    if (rightArr_length > 0)
    {
        for (index = 0; index < rightArr_length; index++)
        {
            arr[leftArr_length + index + 1] = rightArr[index];
        }
    }
    free(leftArr);
    free(rightArr);
}

void arrayTraversal(int *arr, int arrLen)
{
    for (int i = 0; i < arrLen; i++)
    {
        cout << "arr"
             << "[" << i << "]"
             << "=" << arr[i] << endl;
    }
}
