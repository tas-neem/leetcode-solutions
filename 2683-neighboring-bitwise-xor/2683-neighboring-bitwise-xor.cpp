class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int xsum=0;
        for(int no:derived){
            xsum^=no;
        }
        return xsum==0;
    }
};