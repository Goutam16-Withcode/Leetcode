class Solution {
public:
    typedef pair<int,int>pi;
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        priority_queue<pi>p;
        for(int ele : arr){
            int dist = abs(x-ele);
            p.push({dist,ele});
            if(p.size()>k) p.pop();
        }
        vector<int> ans;
        while(p.size()>0){
            int ele = p.top().second;
            ans.push_back(ele);
            p.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};