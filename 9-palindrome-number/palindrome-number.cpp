class Solution {
public:
    bool isPalindrome(int x) {
         long long reversed=0,remender,original;
         original=x;

         while(x>0){
            remender=x%10;
            reversed=reversed*10+remender;
            x/=10;
         }
         if(original==reversed) return true;
         else return false;
    }
};