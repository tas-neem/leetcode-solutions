class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v1,v2;
        unordered_set<int> s(nums1.begin(),nums1.end());
        unordered_set<int> t(nums2.begin(),nums2.end());
        for(int i:s){
            if(t.count(i)==0)
                v1.push_back(i);
        }
        for(int i:t){
            if(s.count(i)==0)
                v2.push_back(i);
        }
        return {v1,v2};
    }
};