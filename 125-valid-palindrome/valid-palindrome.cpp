class Solution {
public:
    string toLowerCase(const string& input) {
        string result = input;
        transform(result.begin(), result.end(), result.begin(),
                  [](unsigned char c) { return tolower(c); });
        return result;
    }

    // Change from removeNonAlpha to removeNonAlphanumeric
    string removeNonAlphanumeric(const string& input) {
        string result = input;
        result.erase(
            remove_if(result.begin(), result.end(),
                      [](unsigned char c) { return !isalnum(c); }),
            result.end());
        return result;
    }

    bool isPalindrome(string s) {
        string mst = toLowerCase(s);
        string ans = removeNonAlphanumeric(mst);
        int n = ans.length();
        for (int i = 0; i < n / 2; i++) {
            if (ans[i] != ans[n - i - 1]) {
                return false;
            }
        }
        return true;
    }
};
