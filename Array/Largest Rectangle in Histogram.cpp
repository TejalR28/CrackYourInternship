class Solution {
     struct start {
        int x;
        int height;
    };
public:
    int largestRectangleArea(vector<int> &heights) {
        int res = 0;
        auto st = stack<start>{};
        heights.push_back(0);
        for (int i = 0; i < (int) heights.size(); i++) {
            auto h = heights[i];
            auto Min_e= i;
            while (!st.empty() && h < st.top().height) {
                res = max(res, st.top().height * (i - st.top().x));
                Min_e= min(Min_e, st.top().x);
                st.pop();
            }
            if (st.empty() || st.top().height < h) {
                st.emplace(start{Min_e, h});
            }
        }
        return res;
    }
};