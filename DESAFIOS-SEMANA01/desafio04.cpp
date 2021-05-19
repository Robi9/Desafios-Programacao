//https://leetcode.com/problems/count-items-matching-a-rule/
//DESAFIO 04

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int acc = 0;
        if (ruleKey == "type"){
            for(auto x : items){
                if(x[0] == ruleValue){
                    acc++;
                }
            }
            return acc;
        }else if (ruleKey == "color"){
            for(auto x : items){
                if(x[1] == ruleValue){
                    acc++;
                }
            }
            return acc;
        }else if (ruleKey == "name"){
            for(auto x : items){
                if(x[2] == ruleValue){
                    acc++;
                }
            }
            return acc;
        }
        
        return acc;
    }
};