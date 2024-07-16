class Solution {
public:
    void sortColors(vector<int>& nums) {
         int m=0,n=0;
        for(int num : nums){
            if(num==0)  m++;

            else if(num==1)  n++;
        }
        for(int i=0;i<m;i++){
            nums[i]=0;
        }
        for(int i=m;i<m+n;i++){
            nums[i]=1;
        }
        for(int i=m+n;i<nums.size();i++){
            nums[i]=2;
        }
    }
};