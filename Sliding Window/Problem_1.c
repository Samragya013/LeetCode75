Maximum Average Subarray I

Category: Sliding Window, Arrays
  
What I Learned: Implemented the basic sliding window technique to efficiently calculate the average of all possible subarrays of a given length. Understood how to maintain a sum within the window and update it by subtracting the outgoing element and adding the incoming element.

Code Solution :

double findMaxAverage(int* nums, int numsSize, int k) {
    int left = 0;
    int right = k;
    double max_sum = 0;
    for(int i=0; i<=(k - 1); i++){
        max_sum += nums[i];
    }
    double temp = max_sum;
    while(right < numsSize){
        temp -= nums[left];
        temp += nums[right];
        if(temp > max_sum){
            max_sum =temp;
        }
        left++;
        right++;
    }
    double res = max_sum/k;
    return res;
}
