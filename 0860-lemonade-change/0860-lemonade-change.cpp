class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives=0,tens=0;
        for(int b:bills){
            if(b==5){
                fives++;
                continue;
            }
            else if(b==10){
                tens++;
                fives--;
            }
            else if(tens>0){
                tens--;
                fives--;
            }
            else
                fives-=3;
            if(fives<0)
                return false;
        }
        return true;
    }
};