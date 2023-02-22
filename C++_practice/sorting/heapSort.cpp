#include <iostream>
using namespace std;

void arrayTraversal(int arrlen, int *arr);
void swap(int *arr, int val1, int val2);
void heapify(int arrlen, int *arr, int actualLen);
void heapSort(int arrlen, int *arr);

int main()
{
    cout << "--- Heap Sort ---\n";

    int myArr[] = {100, 19, 2, 89, 23, 45, 6};
    int arrLen = sizeof(myArr) / sizeof(myArr[0]);

    heapSort(arrLen, myArr);

    return 0;
}

void heapify(int arrlen, int *arr, int actualLen)
{
    for (int counter = 1; counter <= actualLen; counter++)
    {
        int i = arrlen - 1;
        int root_index, isSwap;
        isSwap = 0;

        for (i; i >= 0; i--)
        {
            root_index = i + 1;
            if (root_index * 2 <= arrlen)
            {
                if (root_index * 2 + 1 <= arrlen)
                {
                    if (arr[root_index * 2 - 1] >= arr[root_index * 2 + 1 - 1])
                    {
                        if (arr[root_index - 1] < arr[root_index * 2 - 1])
                        {
                            swap(arr, root_index - 1, root_index * 2 - 1);
                            isSwap = 1;
                        }
                    }
                    else
                    {
                        if (arr[root_index - 1] < arr[root_index * 2 + 1 - 1])
                        {
                            swap(arr, root_index - 1, root_index * 2 + 1 - 1);
                            isSwap = 1;
                        }
                    }
                }
                else
                {
                    if (arr[root_index - 1] < arr[root_index * 2 - 1])
                    {
                        swap(arr, root_index - 1, root_index * 2 - 1);
                        isSwap = 1;
                    }
                }
            }
        }
        if (isSwap == 0)
        { // to exit the loop if there is no swapings
            break;
        }
    }
}

void heapSort(int arrlen, int *arr)
{
    int actualLen = arrlen;

    for (int i = 0; i < actualLen - 1; i++)
    {
        // debugging code
        cout << "--before heapify--" << endl;
        cout << "i=" << i << " arrlen=" << arrlen << endl;
        arrayTraversal(actualLen, arr);

        // generates a max heap
        heapify(arrlen, arr, actualLen);
        // debugging code
        cout << "--after heapify--" << endl;
        arrayTraversal(actualLen, arr);

        // swaping ele at first and last indices
        swap(arr, 0, actualLen - (i + 1));
        // debugging code
        cout << "--after swaping--" << endl;
        arrayTraversal(actualLen, arr);

        // to get sub-array in same arr
        arrlen--;
    }

    arrayTraversal(actualLen, arr);
}

void swap(int *arr, int val1, int val2)
{
    int temp;

    temp = arr[val1];
    arr[val1] = arr[val2];
    arr[val2] = temp;
}

void arrayTraversal(int arrlen, int *arr)
{
    for (int i = 0; i < arrlen; i++)
    {
        cout << i + 1 << "=" << arr[i] << endl;
    }
}