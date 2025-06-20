Longest Subarray of 1's After Deleting One Element

Category: Sliding Window, Arrays

What I Learned: Practiced a variation of the sliding window where the goal is to find the longest subarray of 1s after allowing one deletion (effectively, allowing at most one zero). This involved tracking the count of zeros within the window.

Code Solution:

int longestSubarray(int* nums, int numsSize) {
    int zeroCount = 0;       
    int longestWindow = 0;  
    int start = 0;          
    
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 0) {
            zeroCount++;     
        }
        
        while (zeroCount > 1) {
            if (nums[start] == 0) {
                zeroCount--; 
            }
            start++;         
        }
        
        if (i - start > longestWindow) {
            longestWindow = i - start;
        }
    }
    
    return longestWindow;
}
