//Desafio 05

#include <string>
class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int res=0;
        int n=s.length();
        int i=0;
        while(i<s.size()){
            if(st.empty()){
                st.push(s[i]);
                s.erase(s.begin());
            }else{
                if(st.top() == '(' && st.top() != s[i]){
                    s.erase(s.begin());
                    st.pop();
                }else{
                    st.push(s[i]);
                    s.erase(s.begin());
                }
            }
        }
        while(!st.empty()){
           st.pop();
           res++;            
        }
        return res;

    }
};