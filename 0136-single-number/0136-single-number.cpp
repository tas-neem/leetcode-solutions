class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int no:nums)
            ans^=no;
        return ans;
    }
};