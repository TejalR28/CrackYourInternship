class Solution{
public:
int search(int* arr, int numsSize, int k) {
    int low = 0,high = numsSize - 1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == k) return mid;
        if(arr[low]<=arr[mid]){
            if(arr[low]<=k && arr[mid]>=k){
                high = mid-1;
            }
            else{low = mid+1;}
        }
        else{
            if(arr[mid]<=k && arr[high]>=k){
                low = mid+1;
            }
            else{high = mid - 1;}
        }
    }
    return -1;
}
};