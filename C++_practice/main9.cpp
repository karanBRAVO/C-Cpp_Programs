#include <iostream>
using namespace std;

int main()
{
    cout << "--- find 3 sum ---" << endl;

    int myArr[] = {-1, 0, 1, 2, -1, -4};
    int arrLen = sizeof(myArr) / sizeof(myArr[0]); // 6
    int target = 0;
    int count = 0;

    for (int i = 0; i < arrLen - 2; i++)
    {
        for (int j = i + 1; j < arrLen; j++)
        {
            for (int k = j + 1; k < arrLen; k++)
            {
                int sum = myArr[i] + myArr[j] + myArr[k];
                printf("[i, j, k]=>[%d, %d, %d]\n", i, j, k);
                cout << "Sum=>" << sum << endl;
                if (sum == target)
                {
                    printf("\t*** Triplet=>[%d, %d, %d] ***\n", myArr[i], myArr[j], myArr[k]);
                    count++;
                }
            }
        }
    }

    cout << "\tTotal Triplets possible are " << count << endl;

    return 0;
}