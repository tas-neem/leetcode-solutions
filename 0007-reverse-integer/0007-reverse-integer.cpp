class Solution {
public:
    int reverse(int x) {
        long rev=0;
        bool isneg=false;
        int temp,count=0;
        if(x<0){
            isneg=true;
            temp=-x; 
        }
        else
            temp=x;
        while(temp>0){
            count++;
            temp/=10;
        }
        temp=(isneg ? -x : x);
        while(temp>0){
            rev=rev+(temp%10*pow(10,count-1));
            count--;
            temp/=10;
        }
        if(isneg)
            rev=-rev;
        if(rev<INT_MIN || rev>INT_MAX)
            return 0;
        return rev;
    }
};