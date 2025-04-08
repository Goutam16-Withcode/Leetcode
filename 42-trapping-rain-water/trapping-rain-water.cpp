class Solution {
public:
    int trap(vector<int>& hei) {
        int res = 0;
        int n = hei.size();
        int lmax = 0 , rmax = 0, l = 0 , r = n-1;
        while(l<r){
           lmax = max(lmax , hei[l]);
           rmax = max(rmax , hei[r]);
           if(lmax < rmax){
            res+=(lmax - hei[l]);
            l++;
           }else{
            res+=(rmax - hei[r]);
            r--;
           }
        }
        return res;
    }
};