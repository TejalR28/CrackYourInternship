class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
      int n=nums.size();
        vector<int>ans;
        stack<int>st;
        int i;
        for (i=0;i<n;i++){
            while (!st.empty() && nums[i]<st.top() && st.size()+(n-i)>k){
                st.pop();
            }
            st.push(nums[i]);
        }
        
        while (!st.empty()){
            while(st.size()>k)
                st.pop();
        
                ans.push_back(st.top());
                st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;  
    }
};