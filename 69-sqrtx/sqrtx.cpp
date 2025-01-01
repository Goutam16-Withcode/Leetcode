class Solution {
public:
    int mySqrt(int x) {
        long long  y=(long long)x;
        int lo=0 ,hi=x;
        long long ans =1;
        

        while(lo<=hi){
            long long mid=lo+(hi-lo)/2;
            if(mid*mid<=x){
                ans =mid;
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return ans;
    }
};