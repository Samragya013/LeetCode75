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
