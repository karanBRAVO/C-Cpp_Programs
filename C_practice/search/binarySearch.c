#include <stdio.h>

void arrayTraversal(int arrLen, int *arr);
int InsertionSort(int arrLen, int *arr);
int binarySearch(int *arr, int arrLen, int value, int l, int r);

int main()
{
    int arr[] = {45, 234, 39, 20, 1, 23, 49, 30, 0, 100};
    int arrLen = sizeof(arr) / sizeof(arr[0]);
    int value;
    printf("enter value:");
    scanf("%d", &value);

    arr[arrLen] = InsertionSort(arrLen, arr);
    arrayTraversal(arrLen, arr);
    int l = 0;
    int r = arrLen - 1;
    int pos = binarySearch(arr, arrLen, value, l, r);
    printf("pos=%d", pos);

    return 0;
}

int binarySearch(int *arr, int arrLen, int value, int l, int r)
{
    if (l > r)
    {
        return -1;
    }

    int mid = (l + r) / 2;

    if (arr[mid] == value)
    {
        return (mid + 1);
    }
    else if (arr[mid] < value)
    {
        binarySearch(arr, arrLen, value, mid + 1, r);
    }
    else if (arr[mid] > value)
    {
        binarySearch(arr, arrLen, value, l, mid - 1);
    }
}

int InsertionSort(int arrLen, int *arr)
{
    for (int i = 1; i < arrLen; i++)
    {
        int value = arr[i];
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > value)
            {
                arr[j + 1] = arr[j];
                arr[j] = value;
            }
        }
    }
    return arr[arrLen];
}

void arrayTraversal(int arrLen, int *arr) {
    printf("\nSorted Array = [\n");
    for (int i = 0; i < arrLen; i++)
    {
        printf("(%d) ", arr[i]);
    }
    printf("]\n");
    
}