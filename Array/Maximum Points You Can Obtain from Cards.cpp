class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int l=0,r=0;
        for(int i=0;i<k;i++){
            l += cardPoints[i];
        }
        int maxs = l;
        int left = k-1;
        int right = cardPoints.size()-1;
        while(left>=0){
            l -= cardPoints[left];
            r += cardPoints[right];
            maxs = max(maxs,l+r);
            left--;
            right--;
        }
        return maxs;
    }
};