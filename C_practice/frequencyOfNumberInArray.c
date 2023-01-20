#include <stdio.h>

int main()
{
    int arr[] = {2, 1, 1, 4, 5, 6, 5, 2, 1};
    int arrLen = sizeof(arr) / sizeof(arr[0]);
    int freq[arrLen][2];

    for (int i = 0; i < arrLen; i++)
    {
        int counter = 0;
        for (int j = 0; j < arrLen; j++)
        {
            if (arr[j] == arr[i])
            {
                counter++;
            }
        }
        freq[i][0] = arr[i];
        freq[i][1] = counter;
    }

    printf("\nfreq = [\n");
    for (int i = 0; i < arrLen; i++)
    {
        printf("[%d, %d]\n", freq[i][0], freq[i][1]);
    }
    printf("]\n");

    int maxOccuringEle = 0;

    for (int i = 0; i < arrLen; i++)
    {
        for (int j = 0; j < arrLen; j++)
        {
            if (freq[i][1] >= freq[j][1])
            {
                if (freq[i][0] <= freq[j][0])
                {
                    maxOccuringEle = freq[i][0];
                }
            }
        }
    }

    printf("Maximum occuring element is %d", maxOccuringEle);

    return 0;
}