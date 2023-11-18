#include <stdio.h>

int lengthOfLIS(int nums[], int numsSize)
{
    if (numsSize == 0)
    {
        return 0;
    }

    int ans[numsSize];
    int ansSize = 1;
    ans[0] = nums[0];

    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] > ans[ansSize - 1])
        {
            ans[ansSize] = nums[i];
            ansSize++;
        }
        else
        {
            int low = 0, high = ansSize - 1;
            while (low < high)
            {
                int mid = low + (high - low) / 2;
                if (ans[mid] >= nums[i])
                {
                    high = mid;
                }
                else
                {
                    low = mid + 1;
                }
            }
            ans[low] = nums[i];
        }
    }

    return ansSize;
}

int main()
{
    int numsSize;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &numsSize);

    if (numsSize <= 0)
    {
        printf("Invalid input. The number of elements must be greater than 0.\n");
        return 1;
    }

    int nums[numsSize];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < numsSize; i++)
    {
        scanf("%d", &nums[i]);
    }

    int result = lengthOfLIS(nums, numsSize);
    printf("Length of LIS is %d\n", result);

    return 0;
}

//10, 22, 9, 33, 21, 50, 41, 60
//8
