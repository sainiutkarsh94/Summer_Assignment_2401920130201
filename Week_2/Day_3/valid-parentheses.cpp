class Solution {
public:
    bool isValid(string s) {
        vector<char> res;
        for (char& ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                res.push_back(ch);
            } else {
                if (res.empty())
                    return false;
                char top = res.back();
                res.pop_back();
                if ((ch == ')' && top != '(') || (ch == '}' && top != '{') ||
                    (ch == ']' && top != '[')) {
                    return false;
                }
            }
        }
        return res.empty();
    }
};