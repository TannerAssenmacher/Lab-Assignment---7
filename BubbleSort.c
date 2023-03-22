#include <stdlib.h>
#include <stdio.h>

//Consider running Bubble Sort on the array shown below. Write a c program to compute the number of swaps needed for each index in the array. 
// 97  16  45  63  13  22  7  58  72

void bubbleSort(int *nums, int size)
{
    int totalSwaps = 0;
    for (int i = 0; i < size - 1; i++)
    {
        int swaps = 0;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
                swaps++;
                totalSwaps++;
            }
        }
        printf("pass #%d: %d\n", i + 1, swaps);
    }
    printf("Total Swaps: %d\n", totalSwaps);
}

int main(void)
{
    int size = 9;
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int *ptr = arr; 
    bubbleSort(ptr, size);

    printf("Sorted Array: ");

    for (int i = 0; i < size; i++)
        printf("%d, ", arr[i]);
}