//Desafio 04
//https://leetcode.com/problems/capacity-to-ship-packages-within-d-days

class Solution {
public:
    bool capacidade(vector<int>& w,int k,int peso) {
        
        int days=1,i=0;

        for(auto x:w){
            if(x>peso)
                return false;
            if(i+x<=peso){
                i+=x;
            }
            else{
                days++;
                i=x;
            }
            if(days>k)
                return false;
        }
        return true;
    }
    
    int shipWithinDays(vector<int>& weights, int days){
        int l=1;
        int h = std::accumulate(weights.begin(),weights.end(),0);
        int res;
        
        while(l<=h){
            int mid=(l+h)/2;
            if(capacidade(weights,days,mid)){
                res=mid;
                h=mid-1;
            }
            else
                l=mid+1;
        }
        return res;
    }
};