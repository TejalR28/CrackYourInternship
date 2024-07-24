class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        int l = 0,r=n-1,res =0;
        sort(nums.begin(),nums.end());
      while(l<r){
        res += nums[r--]-nums[l++];
      }
      return res;
    }
};