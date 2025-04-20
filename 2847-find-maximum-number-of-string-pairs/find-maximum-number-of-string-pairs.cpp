class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& v) {
        int n = v.size();
       int count = 0;
       unordered_set<string>s;
       for (int i = 0; i < n; i++)
       {
          string rev = v[i];
          reverse(rev.begin(),rev.end());
          if(s.find(rev)!=s.end()) count++;
          else{
              s.insert(v[i]);
          }
       }
        return count;
    }
};