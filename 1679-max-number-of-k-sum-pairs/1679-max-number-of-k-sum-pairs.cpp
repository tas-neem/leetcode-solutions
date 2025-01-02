class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int more,op=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            more=k-nums[i];
            if((more==nums[i] && mp[more]>1)||mp[more]>=1){
                op++;
                mp[more]--;
                mp[nums[i]]--;
            }
            mp[nums[i]]++;
        }
        return op;
    }
};