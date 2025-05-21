class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int left = 0 , right = n-1;
        while(left < right){
            if (!isalnum(s[left])) { left++; continue; }
            if (!isalnum(s[right])) { right--; continue; }
            if(tolower(s[left])!=tolower(s[right]))  return false;
            left++,right--;
        }
        return true;
    }
};