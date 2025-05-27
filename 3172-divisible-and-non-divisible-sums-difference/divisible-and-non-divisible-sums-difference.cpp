class Solution {
public:
   int differenceOfSums(int n, int m) {
        vector<int>num1;
        vector<int>num2;
        int sum1=0,sum2=0;
        for(int i=1;i<=n;i++){
            if(i%m==0){
                num1.push_back(i);
            }
        }
        for(int i=1;i<=n;i++){
            if(i%m!=0){
                num2.push_back(i);
            }
        }
        for(int j=0;j<num1.size();j++){
                sum1 += num1[j];
       }
        for(int j=0;j<num2.size();j++){
                sum2 += num2[j];
       }
        return sum2-sum1;
}
};