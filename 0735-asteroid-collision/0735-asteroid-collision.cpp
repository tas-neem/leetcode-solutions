class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        bool fl=false;
        for(int i=0;i<asteroids.size();i++){
            while(!s.empty() && asteroids[i]<0 && s.top()>0){
                if(s.top()==abs(asteroids[i])){
                    s.pop();
                    fl=true;
                    break;
                }
                else if(s.top()<abs(asteroids[i])){
                    s.pop();
                }
                else {
                    fl=true;   
                    break;
                } 
            }
            if(!fl)
                s.push(asteroids[i]);
        }
        vector<int> ans;
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};