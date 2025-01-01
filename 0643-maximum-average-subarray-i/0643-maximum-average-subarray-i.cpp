class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        for(int i=0;i<k;i++)
            sum+=nums[i];
        double curr=sum;
        for(int i=k;i<nums.size();i++){
            curr+=nums[i]-nums[i-k];
            sum=max(sum,curr);
        }
        return sum/k;
    }
};