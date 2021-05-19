//https://leetcode.com/problems/shuffle-the-array/
//desafio 01

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> aux;
        for(int i = 0; i < (nums.size())/2; i++){
            aux.push_back(nums[i]);
            aux.push_back(nums[i+n]);
        }
        return aux;
    }
    
};