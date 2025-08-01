class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum=INT_MIN,left=0,right=0,currSum=0;
        while(right<nums.size()){
            currSum+=nums[right];
            maxSum=max(maxSum,currSum);
            if(currSum<0){
                currSum=0;
                left=right+1;
            }
            right++;
        }
        return maxSum;
    }
};