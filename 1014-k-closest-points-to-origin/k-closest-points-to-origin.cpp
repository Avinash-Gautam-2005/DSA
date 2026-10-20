class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        priority_queue<pair<int,pair<int,int>>>maxh;
        for(int i=0;i<n;i++){
            int p1 = points[i][0];
            int p2 = points[i][1];
            int dist = p1*p1 + p2*p2;
            maxh.push({dist,{p1,p2}});
            if(maxh.size()>k){
                maxh.pop();
            }
        }
        vector<vector<int>>res;
        while(!maxh.empty()){
            vector<int>ans;
            ans.push_back(maxh.top().second.first);
            ans.push_back(maxh.top().second.second);
            res.push_back(ans);
            maxh.pop();
        }
        return res;
        
    }
};