Max Consecutive Ones III

Category: Sliding Window, Arrays

What I Learned: Mastered the concept of a variable-sized sliding window to find the longest subarray with at most k zeros. Focused on expanding the window until the condition is met and then shrinking it from the left when the condition is violated.

Code Solution:

int longestOnes(int* nums, int numsSize, int k) {
    int i = 0, j = 0;
    while (j < numsSize) {
        if (nums[j++] == 0) {
            k--;
        }
        if (k < 0) {
            if (nums[i++] == 0) {
                k++;
            }
        }
    }
    return j - i;
}
