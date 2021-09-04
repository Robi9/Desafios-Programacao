//desafio05 - https://leetcode.com/problems/xor-queries-of-a-subarray/
//semana08 

class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> aux;
        vector<int> res;
        aux.push_back(arr[0]);
        
        for(int i = 0; i < arr.size()-1; i++)
            aux.push_back(aux[i]^arr[i+1]);
        
        for(int i = 0; i < queries.size(); i++){
            if(queries[i][0] == 0) res.push_back(aux[queries[i][1]]);
            else res.push_back(aux[(queries[i][0])-1]^aux[queries[i][1]]);
        }
        return res;
    }
};