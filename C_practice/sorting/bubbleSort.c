#include <stdio.h>

// Sorting an array
void arrayTraversal(int arrLen, int *arr);
void bubbleSort(int arrLen, int *arr);

int main()
{
    // Bubble Sorting Algorithm
    int arr1[] = {15, 20, 34, 29, 1, 35, 90, 100, 23, 67, 89, -1, 35};
    int arrLen1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("\n---- Bubble Sort ----\n");
    bubbleSort(arrLen1, arr1);

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

void arrayTraversal(int arrLen, int *arr)
{
    for (int k = 0; k < arrLen; k++)
    {
        printf("%d => %d\n", k + 1, arr[k]);
    }
}