class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
         int n=nums.size();
        int low=0, sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int high=sum, res=-1;
        if(n<k) return res;

        while(low<=high){
            int mid=(low+high)/2;
            if(func(nums,n,k,mid)==true){
                res=mid;
                high =mid-1;
                
            }
            else{
                low=mid+1;
            }
        }
        return res;
    }
     bool func(vector<int>&a, int n, int m,int mid){
             int x=0,c=1;
       for(int i=0;i<n;i++){
        if(a[i]>mid) return false;
        if((a[i]+x)>mid){
            c++;
            x=a[i];
        }
        else{
            x+=a[i];
        }
       } 
        if(c>m) return false;
              return true;
     }
};