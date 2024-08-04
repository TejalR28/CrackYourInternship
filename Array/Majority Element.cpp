class Solution {
public:
    int majorityElement(vector<int>& nums) {
         unordered_map<int, int> mp; 
        int n = nums.size() / 2; 

        
        for (auto a : nums) {
            mp[a]++;
        }

        int res = 0; 

        
        for (auto it : mp) {
            if (it.second > n) {
                res = it.first; 
            }
        }

        return res;  
    }
};