class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> res;
        int n=A.size();
        int freq[51]={0};
        int count=0;
        for(int i=0;i<n;i++){
            freq[A[i]]++;
            if(freq[A[i]]==2)
                count++;
            freq[B[i]]++;
            if(freq[B[i]]==2)
                count++;
            res.push_back(count);
        }
        return res;
    }
};