//Desafio 03
//https://leetcode.com/problems/search-insert-position/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        std::sort (nums.begin(), nums.end());
        std::vector<int>::iterator find;
        find = std::lower_bound(nums.begin(), nums.end(), target);
        if(std::binary_search (nums.begin(), nums.end(), target)){
            return (find-nums.begin());
        }else{
            return find-nums.begin();
        }   
    }
};