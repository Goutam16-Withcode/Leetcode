class Solution
{
    public:
        void generTE(vector<string> &ans, string s, int o, int c, int n)
        {
            if (c == n)
            {
                ans.push_back(s);
                return;
            }
            if (o < n) generTE(ans, s + '(', o + 1, c, n);
            if (c < o) generTE(ans, s + ')', o, c + 1, n);
        }
    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;
        generTE(ans, "", 0, 0, n);
        return ans;
    }
};