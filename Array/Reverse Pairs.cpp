class Solution {
public:
    int merge(int left, int mid, int right, vector<int>& arr){
        int i=left, j=mid+1, k=0;
        int temp[right-left+1];
        int cnt = 0;
        while((i<=mid) && (j<=right)){
            if(arr[i] >(long long) 2*arr[j]){
                cnt += mid - i + 1;
                j++;
            }
            else
                i++;
        }
        i = left;
        j = mid+1;
        while((i<=mid) && (j<=right)){
            if(arr[i] <= arr[j]){
                temp[k] = arr[i];
                i++;
                k++;
            }
            else{
                temp[k] = arr[j];
                k++;
                j++;
            }
        }
        while(i<=mid){
            temp[k] = arr[i];
            i++;
            k++;
        }
        while(j<=right){
            temp[k] = arr[j];
            k++;
            j++;
        }
        for(int i=0;i<right-left+1;i++){
            arr[left+i] = temp[i];
        }
        return cnt;
    }
    int mgsort(int left, int right, vector<int>& arr){
        int mid;
        int cnt=0;
        if(left<right){
            mid = left + (right-left)/2;
            int l_half = mgsort(left,mid,arr);
            int r_half = mgsort(mid+1,right,arr);
            int link = merge(left, mid, right, arr);

            cnt += l_half + r_half + link;
        }
        return cnt;
    }
    int reversePairs(vector<int>& nums) {
        return mgsort(0,nums.size()-1,nums);
    }
};