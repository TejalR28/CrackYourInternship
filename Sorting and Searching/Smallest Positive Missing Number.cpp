class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        sort(arr,arr+n);
       int count=1;
       for (int i=0;i<n;i++){
           if (arr[i]==count)
           count++;
       }
       return count;
    } 
};