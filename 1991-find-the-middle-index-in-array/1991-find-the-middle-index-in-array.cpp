class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total=0,left=0,right=0;
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(left==total-left-nums[i])
                return i;
            left+=nums[i];
        }    
        return -1;
    }
};