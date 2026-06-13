class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int n = chars.size();
        int write = 0;

        while (i < n) {
            char current = chars[i];
            int count = 0;
            while (i < n && chars[i] == current) {
                i++;
                count++;
            }
            chars[write] = current;
            write++;
            if (count > 1) {
                for (char c : to_string(count)) {
                    chars[write++] = c;
                }
            }
        }
        return write;
    }
};