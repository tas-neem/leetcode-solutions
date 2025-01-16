class Solution {
public:
    string decodeString(string s) {
        stack<string> st;
        string res="";
        for(char c:s){
            if(c==']'){
                string subs="";
                while(!st.empty() && st.top()!="["){
                    subs=st.top()+subs; 
                    st.pop();
                }
                st.pop();
                int count=0,place=1;
                while(!st.empty() && isdigit(st.top()[0])){
                    count+=(st.top()[0]-'0')*place;
                    place*=10;
                    st.pop();
                }
                string temp="";
                while(count>0){
                    temp+=subs;
                    count--;
                }
                st.push(temp);
            }
            else{
                st.push(string(1,c));          
            }
        }
        while(!st.empty()){
            res=st.top()+res;
            st.pop();
        }
        return res;
    }
};