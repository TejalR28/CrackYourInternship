class Solution {
public:
    bool canJump(vector<int>& nums) {
      int target = nums.size() - 1;
      for(int i = target - 1;i>=0;i--){
        if(target<=i+nums[i]){
            target = i ;
        }
      }  
      return target == 0;
    }
};