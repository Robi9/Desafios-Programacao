//desafio01 - https://leetcode.com/problems/find-pivot-index
//semana08

class Solution {
    
    public:
        int pivotIndex(vector<int>& nums) {
            int left = 0;
            int right = 0;

            for(int i = 0; i < nums.size(); i++){
                left += nums[i];    
            }
            
            for(int i = 0; i < nums.size(); i++){
                left -= nums[i];
                if(right == left){
                    return i;
                }
                right += nums[i];
            }
            return -1;
        }
};