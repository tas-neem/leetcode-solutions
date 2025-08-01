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
                if(!fives)
                    return false;
                fives--;
            }
            else{
                if(!fives)
                    return false;
                if(tens)
                    tens--;
                else
                    fives-=2;
                fives--;
            }
        }
        return fives>=0 && tens>=0;
    }
};