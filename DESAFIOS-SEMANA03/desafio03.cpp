//Desafio 03
//
#include <cstdlib>

class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        stack <pair <string,string>> st;
        int sum_of_elems = 0;
        vector<int> sum;
        
        for(int i = 0; i<ops.size(); i++){
            if (st.empty()){ 
                st.push(make_pair(ops[i], "0"));
                sum.push_back(atoi(ops[i].c_str()));
            }else{
                if (ops[i]=="+" || ops[i]=="D" || ops[i] == "C"){
                    if (ops[i] == "+"){
                        sum.push_back((atoi(st.top().first.c_str()))+(atoi(st.top().second.c_str())));
                        stringstream ss;
                        ss << sum[sum.size()-1];
                        string aux = ss.str();
                        st.push(make_pair(aux,st.top().first));
                    }else if(ops[i] == "D"){
                       
                            sum.push_back(atoi(st.top().first.c_str())*2);
                            stringstream ss;
                            ss << sum[sum.size()-1];
                            string aux = ss.str();
                            st.push(make_pair(aux,st.top().first));
                        
                    }else if(ops[i] == "C"){
                        sum.push_back(-(atoi(st.top().first.c_str())));
                        st.pop();
                    }
                }else{
                    sum.push_back(atoi(ops[i].c_str()));                    
                    st.push(make_pair(ops[i], st.top().first));
                }
            }
                
        }
        for (auto n : sum){
            sum_of_elems += n;
        } 
        return sum_of_elems;
    }
};