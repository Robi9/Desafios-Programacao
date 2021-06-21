//Desafio 02
//https://leetcode.com/problems/build-an-array-with-stack-operations

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
       
        vector<string> res;
        std::reverse(target.begin(),target.end());
        
        for(int i = 1; i<=n; i++){
            if(res.empty()){
                if(i == target[target.size()-1]){ 
                    res.push_back("Push");
                    target.pop_back();
                }else{
                   res.push_back("Push");
                   res.push_back("Pop");
                }
            }
            else if(!target.empty()){ 
                if(i == target[target.size()-1]){ 
                    res.push_back("Push");
                    target.pop_back();
                }else{
                   res.push_back("Push");
                   res.push_back("Pop");
                }
            }    
            
        }
        return res;
    }
    
};