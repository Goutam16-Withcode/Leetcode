class Solution {
public:
    bool isBalanced(string num) {
        int n = num.length();
        int odd_sum = 0;
        int even_sum = 0;
        for(int i=0;i<n;i++){
            int digit = num[i] - '0';
            if(i%2==0){
                even_sum+=digit;
            }
            else{
                odd_sum += digit;
            }
        }
        if(odd_sum==even_sum) return true;
        else return false;
    }
};