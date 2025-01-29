class Solution {
public:
    double average(vector<int>& sal) {
        sort(sal.begin(),sal.end());
        int n = sal.size();
        double sum = 0 ;
        
        for(int i=0;i<n;i++){
            sum+=sal[i];
        }
        return (sum - sal[0] - sal[n-1])/(n-2);
    }
};