class Solution {
public:
    vector<int> findPeaks(vector<int>& v) {
        int n = v.size();
        vector<int>ans;
        for(int i=1;i<=n-2;i++){
            if(v[i]>v[i-1] and v[i]>v[i+1]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};