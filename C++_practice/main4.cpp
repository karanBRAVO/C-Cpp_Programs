#include <iostream>
using namespace std;

void arrayTraversal(int len, int *arr);
void arrayTraversal_indexed(int len, int *arr, int index);
void quickSort(int *arr, int arrlen, int pivot, int q);

int main()
{
    cout << "--- QUICK SORT ---" << endl;

    int myArr[] = {118, 175, 235, 176, 15, 22, 87, 38, 168, 174};
    int arrLen = sizeof(myArr) / sizeof(myArr[0]);

    quickSort(myArr, arrLen, 0, arrLen - 1);

    return 0;
}

void quickSort(int *arr, int arrlen, int pivot, int q)
{
    static int actual_length = arrlen;

    // debugging code
    cout << "-- before --" << endl;
    cout << " arrlen=" << arrlen << " pivot=" << pivot << " q=" << q << endl;
    arrayTraversal_indexed(actual_length, arr, pivot);

    if (arrlen <= 1)
    { // base condition
        cout << "**returned**" << endl;
        return;
    }

    int temp;
    int p = pivot;

    for (p; p < q + 1; p++)
    { // loop to check greater than pivot
        if (arr[p] > arr[pivot])
        {
            break;
        }
    }
    for (q; q >= pivot; q--)
    { // loop to check less than pivot
        if (arr[q] <= arr[pivot])
        {
            break;
        }
    }
    cout << "p: " << p << " q: " << q << endl;
    if (p + 1 >= q + 1)
    { // swap the pivot and less than pivot if p crosses q
        temp = arr[pivot];
        arr[pivot] = arr[q];
        arr[q] = temp;

        cout << "-- before recursion 1 --" << endl;
        arrayTraversal(actual_length, arr);

        quickSort(arr, arrlen - (q + 1), q + 1, arrlen - 1); // right side of pivot

        cout << "-- after recursion 1 --" << endl;
        arrayTraversal(actual_length, arr);

        quickSort(arr, q, pivot, q - 1); // left side of pivot

        cout << "-- after recursion 2 --" << endl;
        arrayTraversal(actual_length, arr);
    }
    else
    { // swap p and q if p do not crosses q
        temp = arr[p];
        arr[p] = arr[q];
        arr[q] = temp;

        cout << "-- after swaping (p and q) --" << p << q << endl;
        arrayTraversal(actual_length, arr);

        quickSort(arr, arrlen, pivot, q);
    }

    if (arrlen == actual_length)
    { // prints the array items with index(1 based indexing)
        arrayTraversal(arrlen, arr);
    }
}

void arrayTraversal(int len, int *arr)
{
    for (int k = 0; k < len; k++)
    {
        cout << k << "=" << arr[k] << endl;
    }
}

void arrayTraversal_indexed(int len, int *arr, int index)
{
    for (int k = index; k < len; k++)
    {
        cout << k << "=" << arr[k] << endl;
    }
}