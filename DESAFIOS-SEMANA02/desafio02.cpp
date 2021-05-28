//Desafio 02
//https://leetcode.com/problems/guess-number-higher-or-lower

class Solution {
public:
    int guessNumber(int n) {
        
        int i = 1;
        bool res = false;
        int pick;
        while (res == false){
            pick = i + (n-i)/2;
            if (guess(pick)==0){
                res = true;
            }else if (guess(pick)==1){
                i = pick+1; 
            }else{
                n = pick-1;
            }   
        }
        return pick;
    }
};