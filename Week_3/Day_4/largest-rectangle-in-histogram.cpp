class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> left(n, 0);
        vector<int> right(n, 0);
        stack<int> s1;
        stack<int> s2;
        // Right Smaller
        for (int i = n - 1; i >= 0; i--) {
            while (!s1.empty() && heights[s1.top()] >= heights[i]) {
                s1.pop();
            }
            if (s1.empty())
                right[i] = n;
            else
                right[i] = s1.top();
            s1.push(i);
        }
        // Left Smaller
        for (int i = 0; i < n; i++) {
            while (!s2.empty() && heights[s2.top()] >= heights[i]) {
                s2.pop();
            }
            if (s2.empty())
                left[i] = -1;
            else
                left[i] = s2.top();
            s2.push(i);
        }
        int ans = 0;

        for (int i = 0; i < n; i++) {
            int width = right[i] - left[i] - 1;
            int currArea = heights[i] * width;
            ans = max(ans, currArea);
        }
        return ans;
    }
};