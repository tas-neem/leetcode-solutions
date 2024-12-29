class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefix;
        int sum=0,left=0,right=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            prefix.push_back(sum);
        }
        for(int i=0;i<nums.size();i++){
            if(i!=0) 
                left=prefix[i-1];
            right=sum-nums[i]-left;
            if(left==right)
                return i;
        }    
        return -1;
    }
};