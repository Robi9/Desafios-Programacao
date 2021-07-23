//Desafio 04
//https://leetcode.com/problems/minimum-subsequence-in-non-increasing-order

class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int sum = 0;
        int sum1 = 0;
        int j = nums.size()-1;
        int i = 0;
        vector<int> nums1;
        
        if(nums.size() == 1)return nums;
        
        sort(nums.begin(),nums.end());
        for(int i = 0; i <= nums.size()-1;i++){
            sum+=nums[i];
            
        }        
        while(sum >= sum1){
            nums1.push_back(nums[nums.size()-1]);
            sum1+=nums[nums.size()-1];
            sum-=nums[nums.size()-1];
            nums.pop_back();
        }
        return nums1;
    }
    
};