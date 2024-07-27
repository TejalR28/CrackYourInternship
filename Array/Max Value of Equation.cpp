class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
          priority_queue<pair<int,int>>pq;
        pq.push({points[0][1]-points[0][0],points[0][0]});
        int res=INT_MIN;
        for(int i=1;i<points.size();i++)
        {
            while(!pq.empty() && points[i][0]-pq.top().second>k)
            {
                pq.pop();
            }

            if(!pq.empty())
            res=max(res,points[i][1]+points[i][0]+pq.top().first);
            
            pq.push({points[i][1]-points[i][0],points[i][0]});
        }
        return res;
 
    }
};