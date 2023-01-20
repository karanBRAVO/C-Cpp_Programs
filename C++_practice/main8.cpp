#include<iostream>
using namespace std;

void findTwoSum(int arrlen, int *arr);
void findTargetSum(int arrlen, int *arr, int target);

int main() {
    int arr[] = {2, 5, 6, 7, 15, 345};
    int arrlen = sizeof(arr)/sizeof(arr[0]);
    
    findTwoSum(arrlen, arr);
    findTargetSum(arrlen, arr, 13);
    return 0;    
}

void findTwoSum(int arrlen, int *arr) {
    cout<<"--- Total two sums ---"<<endl;
    for (int i=0; i<arrlen; i++) {
        for (int j=i+1; j<arrlen; j++) {
            int val = arr[i] + arr[j];
            cout<<val<<", ";
        }
    }
}

void findTargetSum(int arrlen, int *arr, int target) {
    cout<<"\n--- Find Target ---\n";
    int found = 0;

    for (int i=0; i<arrlen; i++) {
        for (int j=i+1; j<arrlen; j++) {
            if (arr[i]+arr[j] == target) {
                printf("indices: [%d, %d]\n", i, j);
                found = 1;
                break;
            }
        }
        if (found == 1) {
            break;
        }
    }
    if (found == 0) {
        cout<<"Not Found!";
    }
}