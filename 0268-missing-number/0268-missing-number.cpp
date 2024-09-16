class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size(), res=0;
        for(int i=1;i<=n;i++)
            res^=i;
        for(int no:nums)
            res^=no;
        return res;
    }
};