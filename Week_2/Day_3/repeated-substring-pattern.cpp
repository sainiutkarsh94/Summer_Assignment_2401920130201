class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for (int i = 1; i <= n / 2; i++) {
            if (n % i != 0)
                continue;
            string pattern = s.substr(0, i);
            string formed = "";
            for (int j = 0; j < n / i; j++) {
                formed += pattern;
            }
            if (formed == s)
                return true;
        }
        return false;
    }
};