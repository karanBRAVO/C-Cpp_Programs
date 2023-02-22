#include <iostream>
using namespace std;

void arrayTraversal(int arrlen, int *arr);
void countingSort(int arrlen, int *arr, int range);

int main()
{
    cout << "--- Counting Sort ---" << endl;

    int range = 10; // max element that can be in array
    int myArr[] = {2, 9, 7, 4, 1, 3, 2, 4, 5};  // given array
    int arrLen = sizeof(myArr) / sizeof(myArr[0]);  // array length

    countingSort(arrLen, myArr, range);

    return 0;
}

void countingSort(int arrlen, int *arr, int range)
{
    int countArr[range]; // stores the count(occurence) of each number

    for (int i = 0; i < range; i++)
    { // make the count of each number equal 0
        countArr[i] = 0;
    }

    for (int j = 0; j < arrlen; j++)
    { // increment the count of that number which is in arr
        countArr[arr[j] - 1]++;
    }

    cout << "--count arr--" << endl;
    arrayTraversal(range, countArr);

    int index = 0;
    for (int num = 0; num < range; num++)
    {
        for (int k = 0; k < countArr[num]; k++)
        {
            arr[index] = num + 1;
            index++;
        }
    }

    cout << "--final arr--" << endl;
    arrayTraversal(arrlen, arr);
}

void arrayTraversal(int arrlen, int *arr)
{
    for (int k = 0; k < arrlen; k++)
    {
        cout << k + 1 << "=" << arr[k] << endl;
    }
}