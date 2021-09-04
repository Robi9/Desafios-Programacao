//desafio04 - https://leetcode.com/problems/is-subsequence
//semana07

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int startS = 0;
        int startT = 0;
        int endT = t.size();
        int endS = s.size();
        
        while(startT < endT && startS < endS){
            if(t[startT] == s[startS]){
                startS++;
            }
            startT++;
        }
        if(startS == endS) return true;
        else return false; 
    }
};