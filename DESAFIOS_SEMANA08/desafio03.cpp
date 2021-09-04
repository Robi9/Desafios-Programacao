//desafio03 - https://leetcode.com/problems/minimum-size-subarray-sum
//semana08

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int tam = 0;
        int j = 0;
        int sum = 0;
            
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            while(sum - nums[j] >= target && j <= i){
                sum -= nums[j];
                j++;
            }
            if(sum >= target){
                if(tam == 0 || tam > (i - j + 1)){
                    tam = (i - j + 1);
                }
            }
        }

        return tam;
            
    }
};