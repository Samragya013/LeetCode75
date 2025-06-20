Find Pivot Index

Category: Prefix Sum, Arrays

What I Learned: Applied prefix sums to efficiently determine if an index exists where the sum of elements to its left equals the sum of elements to its right. This problem highlighted the power of pre-calculating sums for constant-time lookups.

Code Solution:

int pivotIndex(int* nums, int numsSize) {
    int left = 0; int right = 0;

    for (int i = numsSize - 1; i >= 0 ; i--)
    {
        right += nums[i];
    }

    for (int j = 0; j < numsSize; j++)
    {   
        if (j > 0)
        {
            left += nums[j-1];
        }
        right -= nums[j];

        if (left == right)
        {
            return j;
        }
    }

    return -1;
}
