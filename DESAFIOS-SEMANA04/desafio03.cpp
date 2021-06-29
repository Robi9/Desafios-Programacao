//Desafio 03
//https://leetcode.com/problems/maximum-units-on-a-truck/

class Solution {
public:
   static bool ordena(vector<int> a, vector<int> b){
        return a[1] > b[1];
   }
    
   int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        std::sort(boxTypes.begin(), boxTypes.end(), ordena);
        int i = 0;
        vector<int> x;
        int res = 0;
        while(truckSize > 0 && i<=boxTypes.size()-1){
            x = boxTypes[i];
            if(x[0]<truckSize){
                truckSize = truckSize - x[0];
                i++;
                res+=(x[1]*x[0]);
            }else{
                res+=truckSize*x[1];
                truckSize = 0;
            }
        }
        return res;
   }
    
    
};