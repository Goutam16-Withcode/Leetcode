class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> freqMap; // Map to store frequency of even numbers
        int maxFreq = 0, ans = -1;

        for (int num : nums) {
            if (num % 2 == 0) { // Check if the number is even
                freqMap[num]++;
                // Update the answer if the current number has a higher frequency
                // or if the frequency is the same but the number is smaller
                if (freqMap[num] > maxFreq || (freqMap[num] == maxFreq && num < ans)) {
                    maxFreq = freqMap[num];
                    ans = num;
                }
            }
        }

        return ans;
    }
};