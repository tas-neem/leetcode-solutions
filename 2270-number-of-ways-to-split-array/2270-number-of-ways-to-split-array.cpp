class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int res=0;
        long total=0,left=0;
        for(int i=0;i<nums.size();i++)
            total+=nums[i];
        for(int i=0;i<nums.size()-1;i++){
            left+=nums[i];
            if(left>=total-left)
                res++;
        }
        return res;
    }
};