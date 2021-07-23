//Desafio 03
//https://leetcode.com/problems/intersection-of-two-arrays

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> freq;
        vector<int> nums;
        for(auto x : nums1){
            freq[x] = 0; 
        }
        for(auto & [k,v] : freq){
            for(auto y: nums2){
                if(k == y){
                    freq[y]++;
                }    
            }
        }
        for(auto & [k,v] : freq){
            if(v > 0){
                nums.push_back(k);
            }
        }
        return nums;
    }
};