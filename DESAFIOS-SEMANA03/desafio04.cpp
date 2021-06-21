//Desafio 04
class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        string res="";
        for(int i=0;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(!st.empty() && (st.top()-32==s[i])||(st.top()+32==s[i])){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};