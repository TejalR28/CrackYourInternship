class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) 
    {
        vector<int> v(k,0);
        v[0]=1; 
        int cnt = 0;
        int ans = 0;
        for(int num:nums)
        {
            if(num>=0)
            {
                cnt += num;
            }
            else
            {
                cnt += (num%k)+k;
            }
            cnt%=k;
            ans += v[cnt];
            v[cnt]++;
        }
        return ans;
    }
};