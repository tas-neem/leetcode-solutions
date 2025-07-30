class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int longestones=0,count=0,left=0,right=0,zeros=0;
        while(right<nums.size()){
            if(nums[right]==0)
                zeros++;
            if(zeros>k){
                if(nums[left]==0)
                    zeros--;
                left++;
            }
            if(zeros<=k)
                longestones=max(longestones,right-left+1);
            right++;
        }
        return longestones;
    }
};