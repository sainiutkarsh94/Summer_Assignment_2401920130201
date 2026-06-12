class Solution {
public:
    string decodeString(string s) {
        stack<int> nums;
        stack<string> strs;
        int num = 0;
        string curr = "";
        for (char ch : s) {
            if (isdigit(ch)) {
                num = num * 10 + (ch-'0');//not int(ch)
            } else if (ch == '[') {
                nums.push(num);
                strs.push(curr);
                num = 0;
                curr = "";
            } else if (ch == ']') {
                int k = nums.top();
                nums.pop();
                string prev = strs.top();
                strs.pop();

                string temp = prev;
                while (k--) {
                    temp += curr;
                }
                curr = temp;
            } else {
                curr += ch;
            }
        }
        return curr;
    }
};