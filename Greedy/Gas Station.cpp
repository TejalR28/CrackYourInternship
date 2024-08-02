class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start = 0,diff=0,sum = 0;
        for(int i=0;i<gas.size();i++){
            diff += gas[i]-cost[i];
            sum += gas[i]-cost[i];
            if(sum<0){
                sum =0;
                start = i+1;
            }
        }
        return diff<0?-1:start;
    }
};