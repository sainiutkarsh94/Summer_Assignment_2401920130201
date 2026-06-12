class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> window;
        int i = 0, j = 0, maxLen = 0;
        int cLen = 0;
        for (int j = 0; j < s.size(); j++) {
            if (window.find(s[j]) == window.end()) {
                window.insert(s[j]);

            } else if (window.find(s[j]) != window.end()) {
                while (s[i] != s[j]) {
                    window.erase(s[i]);
                    i++;
                }
                window.erase(s[i]);
                i++;
                window.insert(s[j]);
            }
            cLen = j - i + 1;
            maxLen = max(maxLen, cLen);
        }
        return maxLen;
    }
};