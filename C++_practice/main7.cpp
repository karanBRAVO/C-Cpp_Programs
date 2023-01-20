#include<iostream>
using namespace std;

void arrayTraversal(int arrlen, int *arr);
void radixSort(int arrlen, int *arr);

int main() {
    cout<<"--- Radix Sort ---"<<endl;

    int myArr[] = {150, 349, 234, 456, 23, 46, 3, 19};
    int arrLen = sizeof(myArr) / sizeof(myArr[0]);

    radixSort(arrLen, myArr);

    return 0;
}

void radixSort(int arrlen, int *arr) {
    arrayTraversal(arrlen, arr);
}

void arrayTraversal(int arrlen, int *arr) {
    for (int index = 0; index < arrlen; index++) {
        cout<<index + 1<<"="<<arr[index]<<endl;
    }
}