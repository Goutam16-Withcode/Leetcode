class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        vector<int> &arr = customers;
        int n = arr.size();
        int k = minutes;
        int prevLoss = 0;
        for(int i=0;i<k;i++){
            if(grumpy[i]==1) prevLoss += arr[i];
        }
        int maxLoss = prevLoss ;
        int maxIdx = 0;
        int i = 1;
        int j = k;
        while(j<n){
            int currLoss = prevLoss ;
            if(grumpy[j]==1) currLoss += arr[j];
            if(grumpy[i-1]==1) currLoss -= arr[i-1];
            if(maxLoss<currLoss){
               maxLoss = currLoss;
               maxIdx = i;
            }
            prevLoss = currLoss;
            i++,j++;
        }
        //filling the zeroes grumpy array window
        for(int i = maxIdx;i<maxIdx+k;i++){
            grumpy[i] = 0;
        }
        //sum of satisfaction
        int maxS = 0;
        for(int i = 0;i<n;i++){
            if(grumpy[i]==0) maxS+=arr[i];
        }
        return maxS;
    }
};