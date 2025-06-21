Find the Difference of Two Arrays

Category: Arrays, Hashing (or Sets)

What I Learned: This problem emphasized using hash sets (or frequency arrays/maps) to efficiently identify unique elements present in one array but not in another. It's a classic example of how sets can simplify uniqueness checks and element existence lookups, avoiding nested loops and improving time complexity.

Code Solution:

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** findDifference(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize, int** returnColumnSizes){
    returnColumnSizes[0] = calloc(2, sizeof(int));
    *returnSize = 2;
    
    int **ret = malloc(sizeof(int*) * 2);
    ret[0] = malloc(sizeof(int) * 1000);
    ret[1] = malloc(sizeof(int) * 1000);
    int *table = calloc(2001,sizeof(int));
    
    for (int i = 0; i < nums2Size; i++)
        table[nums2[i] + 1000]++;
    
    for (int i = 0; i < nums1Size; i++){
        if (table[nums1[i] + 1000] == 0)
            ret[0][returnColumnSizes[0][0]++] = nums1[i];
        table[nums1[i] + 1000] = -1;
    }
    
    for (int i = 0; i < 2001; i++)
        if (table[i] > 0)
            ret[1][returnColumnSizes[0][1]++] = i - 1000;
    
    free(table);
    return ret;
}
