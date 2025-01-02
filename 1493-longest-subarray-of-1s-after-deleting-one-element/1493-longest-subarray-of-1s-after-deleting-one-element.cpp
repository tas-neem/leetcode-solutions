class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0,j=0,len=0,k=1;
        while(j<nums.size()){
            if(nums[j]==0)
                k--;
            while(k<0){
                if(nums[i++]==0)
                    k++;
            }
            len=max(len,j-i+1);
            j++;
        }
        return len-1;
    }
};