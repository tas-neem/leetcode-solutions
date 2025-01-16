class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()%2==0) return 0;
        int res=0;
        for(int i:nums2)
            res^=i;
        if(nums2.size()%2!=0){
            for(int i:nums1)
                res^=i;
        }
        return res;
    }
};