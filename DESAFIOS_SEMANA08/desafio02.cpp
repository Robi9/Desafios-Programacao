//desafio02 - https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum
//semana08

class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int startValue = 0;
        int sum = 0;
        for(auto x: nums){
            sum += x;
            startValue = min(startValue, sum);
        }
        return 1 - startValue;
        
    }
};