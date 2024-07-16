class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map <int,int> cnt;
        int res;
        for(int i :nums){
            cnt[i]++;
            if(cnt[i]>1){
                res = i ;
                break;
            }
        }
        return res;
    }
};