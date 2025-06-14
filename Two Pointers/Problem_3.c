Container With Most Water

Category: Two Pointers
    
What I Learned:

✅ Used two-pointer approach to solve an optimization problem in O(n) time
✅ Learned how greedy decisions (moving smaller height inward) help in max-area problems
✅ Practiced writing efficient, clean code for medium-level problems

Code : 

int min(int a, int b){
    if(a<=b) return a;
    return b;
}

int maxArea(int* height, int heightSize) {
    int max=0;
    int left=0, right=heightSize-1;
    while(left != right){
        int water = (right-left)*(min(height[right], height[left]));
        if(water>max){
            max = water;
        }
        if(height[right] < height[left]){
            right--;
        }
        else{
            left++;
        }
    }
    return max;
}
