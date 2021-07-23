//Desafio 04
//https://leetcode.com/problems/unique-number-of-occurrences

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;
       bool res = true;
        for(auto x : arr){
            freq[x]++; 
        }
        for(auto x : arr){
            int dif = freq[x];
            freq.erase(x);
            for(auto & [k,v] : freq){
                if(v == dif) res = false;
                
            }
        }    
        
        return res;
    }
};