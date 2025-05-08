class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& v) {
        int n = v.size();
        vector<int> nge(n, -1);  // Initialize all elements as -1
        stack<int> st;

        // We go from 2n-1 to 0 to simulate circular behavior
        for (int i = 2 * n - 1; i >= 0; i--) {
            int idx = i % n;  // Wrap around using modulo

            // Pop smaller or equal elements from the stack
            while (!st.empty() && st.top() <= v[idx]) {
                st.pop();
            }

            // Only fill nge on the first pass (i < n)
            if (i < n) {
                if (!st.empty()) {
                    nge[idx] = st.top();
                }
            }

            // Push current element to stack for future use
            st.push(v[idx]);
        }

        return nge;
    }
};
