#include <stdio.h>

// Sorting an array
void arrayTraversal(int arrLen, int *arr);
void bubbleSort(int arrLen, int *arr);
void insertionSort(int arrLen, int *arr);
void mergeSort(int arrLen, int *arr);
void merge(int *arrLeft, int *arrRight, int *arr, int arrLen, int arrLeftLen, int arrRightLen);

int main()
{
    // Bubble Sorting Algorithm
    int arr1[] = {15, 20, 34, 29, 1, 35, 90, 100, 23, 67, 89, -1, 35};
    int arrLen1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("\n---- Bubble Sort ----\n");
    bubbleSort(arrLen1, arr1);

    // Insertion Sorting Algorithm
    int arr2[] = {9345, 10, 23, -129, 2938, 349, 30, 59, -230, 102, 349, 11, 30, -100};
    int arrLen2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("\n---- Insertion Sort ----\n");
    insertionSort(arrLen2, arr2);

    // Merge Sorting Algorithm
    int arr3[] = {8, 7, 6, 5, 4, 3, 2, 1};
    int arrLen3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("\n---- Merge Sort ----\n");
    mergeSort(arrLen3, arr3);

    return 0;
}

void bubbleSort(int arrLen, int *arr)
{
    int temp;
    for (int pass = 0; pass < arrLen; pass++)
    {
        int noSwaps = 1;
        for (int i = 0; i < arrLen - (pass + 1); i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                noSwaps = 0;
            }
        }
        if (noSwaps == 1)
        {
            break;
        }
    }
    arrayTraversal(arrLen, arr);
}

void insertionSort(int arrLen, int *arr)
{
    int value;

    for (int i = 1; i < arrLen; i++)
    {
        value = arr[i];
        for (int j = i - 1; j >= 0; j--)
        {
            if (value < arr[j])
            {
                arr[j + 1] = arr[j];
                arr[j] = value;
            }
        }
    }
    arrayTraversal(arrLen, arr);
}

void mergeSort(int arrLen, int *arr)
{
    if (arrLen < 2)
    {
        printf("*** returned ***");
        return;
    }

    int arrLeftLen = arrLen / 2;
    int arrRightLen = arrLen / 2;

    int arrLeft[arrLeftLen];
    int arrRight[arrRightLen];

    for (int i = 0; i < arrLeftLen; i++)
    {
        arrLeft[i] = arr[i];
    }
    for (int j = 0; j < arrRightLen; j++)
    {
        arrRight[j] = arr[j + arrLeftLen];
    }

    printf("\n--befor merge--\narrLen=%d, arrLeftLen=%d, arrRightLen=%d\n", arrLen, arrLeftLen, arrRightLen);
    printf("\n-- arrLeft --\n");
    arrayTraversal(arrLeftLen, arrLeft);
    printf("\n-- arrRight --\n");
    arrayTraversal(arrRightLen, arrRight);
    printf("\n-- arr --\n");
    arrayTraversal(arrLen, arr);

    mergeSort(arrLeftLen, arrLeft);
    mergeSort(arrRightLen, arrRight);
    merge(arrLeft, arrRight, arr, arrLen, arrLeftLen, arrRightLen);

    printf("\n--after merge--\narrLen=%d, arrLeftLen=%d, arrRightLen=%d\n", arrLen, arrLeftLen, arrRightLen);
    printf("\n-- arrLeft --\n");
    arrayTraversal(arrLeftLen, arrLeft);
    printf("\n-- arrRight --\n");
    arrayTraversal(arrRightLen, arrRight);
    printf("\n-- arr --\n");
    arrayTraversal(arrLen, arr);
}

void merge(int *arrLeft, int *arrRight, int *arr, int arrLen, int arrLeftLen, int arrRightLen)
{
    int i, j, k;
    i = j = k = 0;

    while (i < arrLeftLen && j < arrRightLen && k < arrLen)
    {
        if (arrLeft[i] > arrRight[j])
        {
            arr[k] = arrRight[j];
            j = j + 1;
        }
        else
        {
            arr[k] = arrLeft[i];
            i = i + 1;
        }
        k = k + 1;
    }
    while (i < arrLeftLen && k < arrLen)
    {
        arr[k] = arrLeft[i];
        i = i + 1;
        k = k + 1;
    }
    while (j < arrRightLen && k < arrLen)
    {
        arr[k] = arrRight[j];
        j = j + 1;
        k = k + 1;
    }
}

void arrayTraversal(int arrLen, int *arr)
{
    for (int k = 0; k < arrLen; k++)
    {
        printf("%d => %d\n", k + 1, arr[k]);
    }
}