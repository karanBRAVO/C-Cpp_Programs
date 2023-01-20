#include <stdio.h>

void arrayTraversal(int arrLen, int arr[]);
void insertEleEnd(int arrLen, int arr[], int pos, int value);
void searchArray(int arrLen, int arr[], int key);
void sortArrayAsc(int arrLen, int arr[]);
void reverseArray(int arrLen, int arr[]);
int delEle(int arrLen, int arr[], int pos, int count);

int main()
{
    // Array Operations in C
    int myArr[] = {10, 15, 20, 599, 2394, 289374, -67, 2, 23, 123, 89934, 93, 56, -23, 733, -546};
    int arrLength = sizeof(myArr) / sizeof(myArr[0]);

    // array traversal
    printf("\n--- Array Traversing ---\n");
    arrayTraversal(arrLength, myArr);

    // searching an array
    printf("\n--- Searching Array ---\n");
    int key = 23;
    searchArray(arrLength, myArr, key);

    // insertion in an array
    printf("\n--- Insertion in an Array ---\n");
    insertEleEnd(arrLength, myArr, 20, 10000);

    arrLength = sizeof(myArr) / sizeof(myArr[0]);

    // sorting an array
    printf("\n--- Sorting Array in ascending order ---\n");
    sortArrayAsc(arrLength, myArr);

    // reversing an array
    printf("\n--- Reversing Array ---\n");
    reverseArray(arrLength, myArr);

    // deletion in an array
    printf("\n--- Deletion in Array ---\n");
    int count = 0;
    count = delEle(arrLength, myArr, 1, count);

    return 0;
}

void arrayTraversal(int arrLen, int arr[])
{
    for (int i = 0; i < arrLen; i++)
    {
        printf("%d=%d\n", i + 1, arr[i]);
    }
}

void insertEleEnd(int arrLen, int arr[], int pos, int value)
{
    if (pos > arrLen)
    {
        arr[pos - 1] = value;
        for (int i = arrLen; i < pos - 1; i++)
        {
            arr[i] = 0;
        }
        arrayTraversal(pos, arr);
    }
    else
    {
        printf("Cannot insert index should be greater than %d", arrLen);
    }
}

void searchArray(int arrLen, int arr[], int key)
{
    char isFound;
    int foundAt;

    for (int j = 0; j < arrLen; j++)
    {
        if (arr[j] == key)
        {
            isFound = 't';
            foundAt = j;
            break;
        }
        else
        {
            isFound = 'f';
        }
    }

    if (isFound == 't')
    {
        printf("%d is found at %d", key, foundAt + 1);
    }
    else
    {
        printf("%d is not in list", key);
    }
}

void sortArrayAsc(int arrLen, int arr[])
{
    int temp;

    for (int k = 0; k < arrLen; k++)
    {
        for (int l = arrLen - 1; l > k; l--)
        {
            if (arr[k] > arr[l])
            {
                temp = arr[k];
                arr[k] = arr[l];
                arr[l] = temp;
            }
        }
    }
    arrayTraversal(arrLen, arr);
}

void reverseArray(int arrLen, int arr[])
{
    int temp;

    if (arrLen % 2 == 0)
    {
        for (int index = 0; index < (arrLen / 2); index++)
        {
            temp = arr[index];
            arr[index] = arr[arrLen - (index + 1)];
            arr[arrLen - (index + 1)] = temp;
        }
    }
    else
    {
        for (int index = 0; index < ((arrLen - 1) / 2); index++)
        {
            temp = arr[index];
            arr[index] = arr[arrLen - (index + 1)];
            arr[arrLen - (index + 1)] = temp;
        }
    }
    arrayTraversal(arrLen, arr);
}

int delEle(int arrLen, int arr[], int pos, int count)
{
    if (pos <= arrLen && pos > 0)
    {
        for (int i = pos - 1; i < arrLen - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        count++;
        arrayTraversal(arrLen - count, arr);
    }
    else
    {
        printf("invalid position entered");
    }

    return count;
}