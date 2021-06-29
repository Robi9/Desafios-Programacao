//Desafio 02
//https://leetcode.com/problems/assign-cookies/

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int res = 0;
        int gt = 0;
        int st = 0;
        
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        
        if(g.size() == 0 || s.size() == 0){
            return 0;
        }
        
        while(gt <= g.size()-1 && st <= s.size()-1){
            if(s[st]>=g[gt]){
                res+=1;
                gt++;
                st++;
            }else{
                if(g[gt]>s[s.size()-1]) return res;
                else{
                    if(st+1 <= s.size()-1){
                        st++;
                    }
                }
            }
        }
        return res;
    }
};