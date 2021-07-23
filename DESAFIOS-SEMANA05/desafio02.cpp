//Desafio 02
//https://leetcode.com/problems/find-words-that-can-be-formed-by-characters

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> freq;
        bool b = true;
        int sum = 0;

        for(auto x : words){
            for(auto y : x){
                freq[y]++;
            }
            for(auto c : chars){
                freq[c]--;
            }
            for(auto & [k,v]:freq){
                if(v > 0){
                    b = false;
                }
            }
            
            if(b)sum += x.size();
            b = true;
            freq.clear();
            
        }

       return sum; 
    }
};