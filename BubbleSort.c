#include <stdlib.h>
#include <stdio.h>

//Consider running Bubble Sort on the array shown below. Write a c program to compute the number of swaps needed for each index in the array. 
// 97  16  45  63  13  22  7  58  72

int bubbleSort(int *nums, int size)
{
    int swaps = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
                swaps++;
            }
        }
    }
    return swaps;
}

int main(void)
{
    int size = 9;
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int *ptr = arr; 
    int swapCount = bubbleSort(ptr, size);
    printf("Array: ");

    for (int i = 0; i < size; i++)
        printf("%d, ", arr[i]);

    printf("\nNumber of swaps: %d", swapCount);

}