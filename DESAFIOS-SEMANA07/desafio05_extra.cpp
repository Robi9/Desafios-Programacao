//desafio05 (extra) - https://leetcode.com/problems/max-consecutive-ones
//semana07

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int start = 0;
        int end = nums.size();
        int count = 0;
        int aux = 0;
        
        while(start < end){
            if(nums[start] == 1){
                count++;
                if(count >= aux) aux = count;
            }else{
                
                    count = 0;
            }
            start++;
        }
        
        return aux;
    }
};