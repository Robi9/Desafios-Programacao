//https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
//DESAFIO 02

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        vector<int> n;
        for (int i = 0; i < nums.size(); i++){
            if (((std::to_string(nums[i])).length())%2 == 0){
                n.push_back(nums[i]);
            }     
        }
        return n.size();
    }
};