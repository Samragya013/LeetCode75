️Move Zeroes

Category: Two Pointers
    
What I Learned:

✅ How to use two pointers to rearrange elements in-place without extra space
✅ Improved understanding of maintaining relative order of non-zero elements
✅ Optimized space and time (O(n))

void moveZeroes(int* nums, int numsSize) {
    int nonzero = 0; // Pointer for non-zero elements

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            // Swap non-zero element with the element at `nonzero`
            int temp = nums[i];
            nums[i] = nums[nonzero];
            nums[nonzero] = temp;
            nonzero++;
        }
    }
}
