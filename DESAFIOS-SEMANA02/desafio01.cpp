//Desafio 01
//https://leetcode.com/problems/find-smallest-letter-greater-than-target

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0;
        int r = letters.size()-1;
        while (l <= r) {
            int mid = (l + r);
            if (letters[mid] > target) {
                r = mid - 1;
            }else{
                l = mid + 1;
            }    
        }
        
        return letters[l%letters.size()];
    }
};