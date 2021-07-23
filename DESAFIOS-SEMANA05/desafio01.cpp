//Desafio 01
//https://leetcode.com/problems/n-repeated-element-in-size-2n-array

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int> freq;
        int i;
        for (auto c:nums){
            freq[c]++;
        }

        for(auto & [a,b] : freq){
            if(b > 1){
                i = a;
            }
        }
        return i;
    }
};