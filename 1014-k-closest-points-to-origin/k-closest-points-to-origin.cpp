class Solution {
public:
    typedef pair<int,vector<int>>pi;
    vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
        priority_queue<pi>p;
        for(auto v : arr){
            int x = v[0], y=v[1];
            int dist = x*x + y*y;
            p.push({dist,v});
            if(p.size()>k) p.pop();
        }
        vector<vector<int>>ans;
        while(p.size()>0){
            vector<int>v = p.top().second;
            ans.push_back(v);
            p.pop();
        }
        return ans; 
    }
};