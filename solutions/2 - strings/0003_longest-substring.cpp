class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last(128, -1); // ASCII has max 128 positions
        int maxLen = 0, start = 0;

        for (int i = 0; i < s.size(); ++i) {
            // if last
            if (last[s[i]] >= start)
                start = last[s[i]] + 1;

            last[s[i]] = i;
            maxLen = max(maxLen, i - start + 1);
        }

        return maxLen;
    }
};