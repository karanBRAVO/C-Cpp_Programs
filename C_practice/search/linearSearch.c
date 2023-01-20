#include <stdio.h>

int linearSearch(int *arr, int arrLen, int value, int index);

int main()
{
    int arr[] = {4, 56, 39, 1, 39, 10, 22, 445, 11, 100};
    int arrLen = sizeof(arr) / sizeof(arr[0]);
    int value = 0;

    int pos = linearSearch(arr, arrLen, value, 0);
    printf("pos=%d", pos);

    return 0;
}

int linearSearch(int *arr, int arrLen, int value, int index)
{
    if (index >= arrLen)
    {
        return -1;
    }

    if (value == arr[index])
    {
        return (index + 1);
    }
    else
    {
        linearSearch(arr, arrLen, value, ++index);
    }
}
