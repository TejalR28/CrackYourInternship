class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int n = nums.size();
        int res = 0;
        for(int i=0;i<n;i++){
            int sum = nums[i];
            if(sum == k) res++;
            for(int j=i+1;j<n;j++){
                sum +=nums[j];
                if(sum==k) res++;
            }
        }
        return res;
    }
};