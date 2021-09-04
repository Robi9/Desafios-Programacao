//Desafio 01 - https://leetcode.com/problems/remove-element/
//Semana 07
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int start = 0;
        int end = nums.size()-1;
        int k= 0;
        
        if(nums.size() == 0) return 0;
        if(nums.size() == 1 && nums[start] == val) return 0;
        
        while(start <= end){
            if(nums[start] == val){
                swap(nums[start], nums[end]);
                end--;
                k++;
            }else{
                start++;    
            }  
        }
        return nums.size()-k;
    }
};