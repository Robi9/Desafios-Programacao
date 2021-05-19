//https://leetcode.com/problems/decompress-run-length-encoded-list/submissions/
//DESAFIO 03

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
         vector<int> aux;
         int freq ;
         int val;
         int acc = 1;
         for(int i = 0; i < nums.size()/2; i++)   {
             freq = nums[2*i];
             val = nums[2*i+1];
             while(acc<=freq){
                 aux.push_back(val);
                 acc++;
             }
             acc=1;
         }
        return aux;
    }
};