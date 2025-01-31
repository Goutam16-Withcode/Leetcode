class Solution {
public:
    typedef pair<int,pair<int,int>>pi;
    vector<int> smallestRange(vector<vector<int>>& arr) {
        priority_queue<pi,vector<pi>,greater<pi>>p;
        int mx = INT_MIN;
        for(int i=0;i<arr.size();i++){
            mx = max(mx,arr[i][0]);
            p.push({arr[i][0],{i,0}});

        }
        int mn = p.top().first;
        int start = mn, end = mx;
        while(true){
            int row = p.top().second.first;
            int col = p.top().second.second;
            p.pop();
            if(col==arr[row].size()-1) break;
            p.push({arr[row][col+1],{row,col+1}});
            mx = max(mx,arr[row][col+1]);
            mn = p.top().first;
            if(mx-mn < end-start){
                end = mx;
                start = mn;
            }
        }
        return {start,end};
    }
};