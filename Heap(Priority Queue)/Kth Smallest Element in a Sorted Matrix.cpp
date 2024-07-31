class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int s=matrix[0][0],l=matrix[matrix.size()-1][matrix.size()-1];
       int n = matrix.size();
       while(s<l)
       {
           int mid=(s+l-1)/2;
           int c=0;
           for(int i=0;i<n;i++)
           {
               if(matrix[i][0]>mid)
               break;
               int s1=0,l1=n-1;
               while(s1<l1)
               {
                   int mid1=(s1+l1+1)/2;
                   
                   if(matrix[i][mid1]<=mid)
                   s1=mid1;
                   else
                   l1=mid1-1;
               }
               
               c+=s1+1;
               
           }
        
           if(c<k)
           {
               s=mid+1;
           }
           
           else 
           l=mid;
       }
       return s; 
    }
};