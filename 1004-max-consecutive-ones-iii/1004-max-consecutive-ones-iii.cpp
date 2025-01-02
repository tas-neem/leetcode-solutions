class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int len=0,i=0,j=0,zero=0;
        int win=k;
        while(j<nums.size()){
            if(nums[j]==0)
                zero++;
            while(zero>k){
                if(nums[i++]==0)
                    zero--;
            }
            len=max(len,j-i+1);
            j++;
        }
        return len;
    }
};