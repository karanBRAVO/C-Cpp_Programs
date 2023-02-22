#include <stdio.h>

// Sorting an array
void arrayTraversal(int arrLen, int *arr);
void insertionSort(int arrLen, int *arr);

int main()
{
    // Insertion Sorting Algorithm
    int arr2[] = {9345, 10, 23, -129, 2938, 349, 30, 59, -230, 102, 349, 11, 30, -100};
    int arrLen2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("\n---- Insertion Sort ----\n");
    insertionSort(arrLen2, arr2);

    return 0;
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

void arrayTraversal(int arrLen, int *arr)
{
    for (int k = 0; k < arrLen; k++)
    {
        printf("%d => %d\n", k + 1, arr[k]);
    }
}