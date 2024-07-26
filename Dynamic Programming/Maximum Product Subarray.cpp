class Solution {
public:
    int maxProduct(vector<int>& nums) {
    
        double pre = 1;
        double suff = 1;

        int ans = INT_MIN;

        for(int i=0;i<nums.size();i++){
            
            if(pre==0) pre= 1;
            if(suff==0) suff = 1;

            pre *= (nums[i]);
            suff *= (nums[nums.size()-i-1]);

            double temp = pre;
            if(pre < suff) temp = suff;
            if(ans < temp) ans = temp;

        }

        return ans;
    }
};